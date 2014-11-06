#pragma once
#include <list>
#include "GameComponent.hpp"
class Spawner
{
public:
	__declspec(dllexport) Spawner();
	__declspec(dllexport) ~Spawner();
	__declspec(dllexport) void pushComponent(GameComponent * c);
	__declspec(dllexport) GameComponent * popComponent();
	__declspec(dllexport) int ComponentCount();

private:
	std::list<GameComponent *> Components;
};

