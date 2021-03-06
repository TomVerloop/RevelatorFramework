#include "Chunk.hpp"
#include "GameFactory.hpp"

Chunk::Chunk(sf::Vector2i ChunkCoord, float size) : 
ChunkCoord{ ChunkCoord }, 
size{ size }, 
PurePosition{ ChunkCoord.x * size, ChunkCoord.y * size }
{

}


Chunk::~Chunk()
{

}

void Chunk::setLeftTop(Chunk *	leftrop)
{ 
	LeftTop = leftrop; 
}

void Chunk::setTop(Chunk *	top)
{ 
	Top = top; 
}

void Chunk::setRightTop(Chunk * righttop)
{ 
	RightTop = righttop; 
}

void Chunk::setLeft(Chunk * left)
{ 
	Left = left; 
}

void Chunk::setRight(Chunk * right)
{ 
	Right = right; 
}

void Chunk::setLeftBottom(Chunk * leftbottom)
{ 
	LeftBottom = leftbottom; 
}

void Chunk::setBottom(Chunk * bottom)
{
	Bottom = bottom; 
}

void Chunk::setRightBottom(Chunk * rightbottom)
{ 
	RightBottom = rightbottom; 
}

Chunk * Chunk::getTop()
{
	return Top;
}

Chunk * Chunk::getLeft()
{
	return Left;
}

Chunk * Chunk::getRight()
{
	return Right;
}

Chunk * Chunk::getBottom()
{
	return Bottom;
}

void Chunk::Update(const UpdateData & updateobject)
{
	for (const auto & comp : Components)
	{
		comp->Update(updateobject);
		if (comp->hasSpawner())
		{
			Spawner * s = comp->getSpawner();
			if (comp->isDead())
			{
				RemoveFromChunk.push_back(comp);
			}
			for (int i = 0; i < s->ComponentCount(); i++)
			{
				Components.push_back(s->popComponent());
			}
		}
		if (comp->getPosition().x > size + PurePosition.x || comp->getPosition().x < PurePosition.x || comp->getPosition().y > size + PurePosition.y || comp->getPosition().y < PurePosition.y)
		{
			MoveComponentToNextChunk(comp);
		}
	}
	RemoveFlaggedFromChunk();
	Collide(updateobject);
	Sense(updateobject);

}

void Chunk::Draw(sf::RenderWindow & window, sf::Vector2f offset)
{
	if (LeftTop != NULL)
	{
		LeftTop->DrawSelf(window, offset, topleft);
	}

	if (Top != NULL)
	{
		Top->DrawSelf(window, offset, top);
	}

	if (RightTop != NULL)
	{
		RightTop->DrawSelf(window, offset, topright);
	}

	if (Left != NULL)
	{
		Left->DrawSelf(window, offset, left);
	}
	DrawSelf(window, offset, center);
	if (Right != NULL)
	{
		Right->DrawSelf(window, offset, right);
	}
	if (LeftBottom != NULL)
	{
		LeftBottom->DrawSelf(window, offset, bottomleft);
	}
	if (Bottom != NULL)
	{
		Bottom->DrawSelf(window, offset, bottom);
	}
	if (RightBottom != NULL)
	{
		RightBottom->DrawSelf(window, offset, bottomright);
	}
}


void Chunk::Collide(const UpdateData & updateobject)
{
	for (const auto & comp : Components)
	{
		if (comp->hasCollidable() && comp->getCollidable()->isMoved())
		{
			CollideSingle(updateobject, comp);
			sf::Rect<float> r{ comp->getCollidable()->getCollider() };
			if (Right != nullptr && ((r.left + r.width) > PurePosition.x + size))
			{
				Right->CollideSingle(updateobject, comp);
			}
			if (RightBottom != nullptr && ((r.left + r.width) > PurePosition.x + size) && ((r.top + r.height) > PurePosition.y + size))
			{
				RightBottom->CollideSingle(updateobject, comp);
			}
			if (Bottom != nullptr && ((r.top + r.height) > PurePosition.y + size))
			{
				Bottom->CollideSingle(updateobject, comp);
			}
		}
	}
}

void Chunk::Sense(const UpdateData & updateobject)
{
	for (auto comp : Components)
	{
		if (comp->hasSensor())
		{
			SenseSingle(updateobject, comp);
			float rad = comp->getSensor()->GetVisionRadius();
			sf::Vector2f v{ (comp->getCollidable()->getCollider().left + comp->getCollidable()->getCollider().width / 2), (comp->getCollidable()->getCollider().top + comp->getCollidable()->getCollider().height / 2) };
			if (Right != nullptr && v.x + rad > PurePosition.x + size)
			{
				Right->SenseSingle(updateobject, comp);
			}
			if (RightBottom != nullptr && v.x + rad > PurePosition.x + size && v.y + rad > PurePosition.y + size)
			{
				RightBottom->SenseSingle(updateobject, comp);
			}
			if (Bottom != nullptr && v.y + rad > PurePosition.y + size)
			{
				Bottom->SenseSingle(updateobject, comp);
			}
			if (LeftBottom != nullptr && v.x - rad < PurePosition.x && v.y + rad > PurePosition.y + size)
			{
				LeftBottom->SenseSingle(updateobject, comp);
			}
			if (Left != nullptr && v.x - rad < PurePosition.x)
			{
				Left->SenseSingle(updateobject, comp);
			}
			if (LeftTop != nullptr && v.x - rad < PurePosition.x &&v.y - rad < PurePosition.y)
			{
				LeftTop->SenseSingle(updateobject, comp);
			}
			if (Top != nullptr && v.y - rad < PurePosition.y)
			{
				Top->SenseSingle(updateobject, comp);
			}
			if (RightTop != nullptr && v.x + rad > PurePosition.x + size && v.y - rad < PurePosition.y)
			{
				RightTop->SenseSingle(updateobject, comp);
			}
		}
	}
}


void Chunk::SenseSingle(const UpdateData & updateobject, GameComponent * comp)
{
	Sensor * sensor = comp->getSensor();
	sf::Vector2f CenterOfSensor{ (comp->getCollidable()->getCollider().left + comp->getCollidable()->getCollider().width / 2), (comp->getCollidable()->getCollider().top + comp->getCollidable()->getCollider().height / 2) };
	for (auto Sensored : Components)
	{

		if (Sensored != comp && Sensored->hasCollidable())
		{
			sf::Vector2f CenterOfSensed{ (Sensored->getCollidable()->getCollider().left + Sensored->getCollidable()->getCollider().width / 2), (Sensored->getCollidable()->getCollider().top + Sensored->getCollidable()->getCollider().height / 2) };
			float xy = abs(CenterOfSensor.x) - abs(CenterOfSensed.x);
			float yz = abs(CenterOfSensor.y) - abs(CenterOfSensed.x);
			float zx = sqrt(pow(xy, 2) + pow(yz, 2));
			if (zx <= sensor->GetVisionRadius())
			{
				sensor->addSeenObject(Sensored);
			}
		}
	}
}

void Chunk::CollideSingle(const UpdateData & updateobject, GameComponent * comp)
{
	for (const auto & collider : Components)
	{
		if (comp != collider)
		{
			if (collider->hasCollidable())
			{
				if (comp->getCollidable()->getCollider().intersects(collider->getCollidable()->getCollider()))
				{
					comp->Collide(collider);
					collider->Collide(comp);
				}
			}
		}
	}
}

void Chunk::DrawSelf(sf::RenderWindow & window, sf::Vector2f offset, Position pos)
{
	for (const auto & comp : Components)
	{
		if (comp->hasDrawable())
		{
			comp->Draw(window, offset);
		}
	}
}

void Chunk::addComponent(GameComponent * c)
{
	sf::Vector2f v{ c->getPosition() };
	if (v.x < PurePosition.x)
	{
		Left->addComponent(c);
	}
	else if (v.x >(PurePosition.x + size))
	{
		Right->addComponent(c);
	}
	else if (v.y < PurePosition.y)
	{
		Top->addComponent(c);
	}
	else if (v.y >(PurePosition.y + size))
	{
		Bottom->addComponent(c);
	}
	else
	{
		Components.push_back(c);
	}
}


void Chunk::MoveComponentToNextChunk(GameComponent * c)
{
	sf::Vector2f pos = c->getPosition();

	if (pos.x > size + PurePosition.x && AxisisInBounds(pos.y, PurePosition.x))
	{
		if (Right != nullptr)
		{
			RemoveFromChunk.push_back(c);
			Right->addComponent(c);
		}
		else
		{
			pos.x = size;
		}
	}
	else if (pos.x > size + PurePosition.x && pos.y > size + PurePosition.y)
	{
		if (RightBottom != nullptr)
		{
			RemoveFromChunk.push_back(c);
			RightBottom->addComponent(c);
		}
		else
		{
			pos.x = size;
			pos.y = size;
		}
	}
	else if (AxisisInBounds(pos.x, PurePosition.x) && pos.y > size + PurePosition.y)
	{
		if (Bottom != nullptr)
		{
			RemoveFromChunk.push_back(c);
			Bottom->addComponent(c);
		}
		else
		{
			pos.y = size;
		}
	}
	else if (pos.x <  PurePosition.x && pos.y > size + PurePosition.y)
	{
		if (LeftBottom != nullptr)
		{
			RemoveFromChunk.push_back(c);
			LeftBottom->addComponent(c);
		}
		else
		{
			pos.y = size;
			pos.x = 0;
		}
	}
	else if (pos.x < PurePosition.x && AxisisInBounds(pos.y, PurePosition.y))
	{
		if (Left != nullptr)
		{
			RemoveFromChunk.push_back(c);
			Left->addComponent(c);
		}
		else
		{
			pos.x = 0;
		}
	}
	else if (pos.x < PurePosition.x && pos.y < PurePosition.y)
	{
		if (LeftTop != nullptr)
		{
			RemoveFromChunk.push_back(c);
			LeftTop->addComponent(c);
		}
		else
		{
			pos.x = 0;
			pos.y = 0;
		}
	}
	else if (AxisisInBounds(pos.x, PurePosition.x) && pos.y < PurePosition.y)
	{
		if (Top != nullptr)
		{
			RemoveFromChunk.push_back(c);
			Top->addComponent(c);
		}
		else
		{
			pos.y = 0;
		}
	}
	else if (pos.x > size + PurePosition.x && pos.y < PurePosition.y)
	{
		if (RightTop != nullptr)
		{
			RemoveFromChunk.push_back(c);
			RightTop->addComponent(c);
		}
		else
		{
			pos.y = 0;
			pos.x = 1000;
		}
	}
	c->setPosition(pos);
}

bool Chunk::AxisisInBounds(float axis, float offset)
{
	return (axis >= 0.f + offset && axis <= size + offset);
}

void Chunk::RemoveFlaggedFromChunk()
{
	for (const auto & comp : RemoveFromChunk)
	{
		Components.remove(comp);
	}
	RemoveFromChunk.clear();
}