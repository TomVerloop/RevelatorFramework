
#include "Spawner.hpp"


Spawner::Spawner()


{
}
Spawner::~Spawner()
{
}


void Spawner::pushComponent(std::string Name,ProducerPackage p)
{
	GameFactory * f = &GameFactory::getInstance();
	Components.push_back(f->ProduceGameObject(Name,p));
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
