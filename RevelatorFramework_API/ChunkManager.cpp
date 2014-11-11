#include "ChunkManager.hpp"


ChunkManager::ChunkManager()
{

}


ChunkManager::~ChunkManager()
{

}

void ChunkManager::Update(UpdateData * updateobject)
{
	Chunk * c = FirstChunk;
	bool GoingRight = true;
	while (c != NULL)
	{
		c->Update(updateobject);
		if (GoingRight && c->getRight() != NULL)
		{
			c = c->getRight();
		}
		else if (!GoingRight && c->getLeft() != NULL)
		{
			c = c->getLeft();
		}
		else
		{
			c = c->getBottom();
			GoingRight = !GoingRight;
		}
	}
}

void ChunkManager::Draw(sf::RenderWindow & window, sf::Vector2f offset)
{
	ActiveChunk->Draw(window, offset);
}


void ChunkManager::setActiveChunk(Chunk * c)
{
	ActiveChunk = c;
}

void ChunkManager::setFirstChunk(Chunk * c)
{
	FirstChunk = c;
	ActiveChunk = c;
}

void ChunkManager::addGameComponent(GameComponent * c)
{
	FirstChunk->addComponent(c);
}