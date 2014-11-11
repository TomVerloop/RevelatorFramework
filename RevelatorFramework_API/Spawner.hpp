#pragma once
#include <list>
#include "GameComponent.hpp"
#include "GameFactory.hpp"

class ProducerPackage;


class Spawner
{
public:
	__declspec(dllexport) Spawner();
	__declspec(dllexport) ~Spawner();
	__declspec(dllexport) void pushComponent(std::string Name, ProducerPackage p);
	__declspec(dllexport) GameComponent * popComponent();
	__declspec(dllexport) int ComponentCount();

private:
	std::list<GameComponent *> Components;
};

