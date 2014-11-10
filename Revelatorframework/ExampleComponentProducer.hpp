#pragma once
#include <GameObjectProducer.hpp>
#include "ExampleComponent.hpp"
class ExampleComponentProducer :
	public GameObjectProducer
{
public:
	ExampleComponentProducer();
	~ExampleComponentProducer();
	GameComponent * Produce();
	GameComponent * Produce(ProducerPackage Package);
	GameComponent * Produce(ProducerPackage * Package);   
};

