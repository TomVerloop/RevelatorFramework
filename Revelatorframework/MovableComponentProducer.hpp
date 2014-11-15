#pragma once
#include <GameObjectProducer.hpp>
#include "MovableComponent.hpp"
class MovableComponentProducer :
	public GameObjectProducer
{
public:
	MovableComponentProducer();
	~MovableComponentProducer();
	GameComponent * Produce();
	GameComponent * Produce(ProducerPackage Package);
	GameComponent * Produce(ProducerPackage * Package);
};

