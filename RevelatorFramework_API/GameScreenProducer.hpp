#pragma once
#include "GameScreen.hpp"
#include "ProducerPackage.hpp"

class GameScreen;

class GameScreenProducer
{
public:
	__declspec(dllexport) GameScreenProducer();
	__declspec(dllexport) ~GameScreenProducer();
	__declspec(dllexport) virtual GameScreen * Produce() = 0;
	__declspec(dllexport) virtual GameScreen * Produce(ProducerPackage Package) = 0;
	__declspec(dllexport) virtual GameScreen * Produce(ProducerPackage * Package) = 0;
};

