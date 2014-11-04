#pragma once
#include <list>
#include "GameComponent.hpp"
class Spawner
{
public:
	Spawner();
	~Spawner();
	void pushComponent(GameComponent * c);
	GameComponent * popComponent();
	int ComponentCount();

private:
	std::list<GameComponent *> Components;
};

