#include "MovableComponentProducer.hpp"


MovableComponentProducer::MovableComponentProducer()
{
}


MovableComponentProducer::~MovableComponentProducer()
{
}

GameComponent * MovableComponentProducer::Produce()
{
	return new MovableComponent(sf::Vector2f{0.f,0.f});
}

GameComponent * MovableComponentProducer::Produce(ProducerPackage Package)
{
	return new MovableComponent(sf::Vector2f{ Package.getFloat("VectorX"), Package.getFloat("VectorY") });
}

GameComponent * MovableComponentProducer::Produce(ProducerPackage * Package)
{
	return Produce(*Package);
}
