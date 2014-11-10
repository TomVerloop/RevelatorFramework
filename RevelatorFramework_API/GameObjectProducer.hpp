#pragma once
#include "ProducerPackage.hpp"
#include "GameComponent.hpp"
class GameObjectProducer
{
public:
	__declspec(dllexport) GameObjectProducer();
	__declspec(dllexport) ~GameObjectProducer();
	__declspec(dllexport) virtual GameComponent * Produce() = 0;
	__declspec(dllexport) virtual GameComponent * Produce(ProducerPackage Package) = 0;
	__declspec(dllexport) virtual GameComponent * Produce(ProducerPackage * Package) = 0;
};

