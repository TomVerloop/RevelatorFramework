#include "Collidable.hpp"

Collidable::Collidable(sf::Vector2f * position, sf::Vector2f size) : 
hasMoved{ false },
Collider{ *position, size }
{
	this->position = position;
	lastpos = *position;
	hasMoved = false;
}

Collidable::~Collidable()
{

}


bool Collidable::isMoved()
{ 
	bool b = (*position) == lastpos;
	if (!b)
	{
		lastpos = (*position);
	}
	return !b; 
}

Rectangle & Collidable::getCollider()
{
	Collider.left = position->x;
	Collider.top = position->y;
	return Collider;
}
