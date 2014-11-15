#pragma once
#include <GameScreenProducer.hpp>
#include "ExampleTestScreen.hpp"
class ExampleScreenProducer :
	public GameScreenProducer
{
public:
	ExampleScreenProducer();
	~ExampleScreenProducer();
	GameScreen * Produce() override;
	GameScreen * Produce(ProducerPackage Package) override;
	GameScreen * Produce(ProducerPackage * Package) override;
};

