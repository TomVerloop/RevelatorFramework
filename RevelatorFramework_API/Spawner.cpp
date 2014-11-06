#include "Spawner.hpp"


Spawner::Spawner()
{
}


Spawner::~Spawner()
{
}


void Spawner::pushComponent(GameComponent * c)
{
	Components.push_back(c);
}

GameComponent * Spawner::popComponent()
{
	GameComponent * c = Components.front();
	Components.pop_front();
	return c;

}

int Spawner::ComponentCount()
{
	return Components.size();
}
