#include "ExampleComponentProducer.hpp"


ExampleComponentProducer::ExampleComponentProducer()
{
}


ExampleComponentProducer::~ExampleComponentProducer()
{
}


GameComponent * ExampleComponentProducer::Produce()
{
	return new ExampleComponent();
}

GameComponent * ExampleComponentProducer::Produce(ProducerPackage Package)
{
	return new ExampleComponent(sf::Vector2f{ Package.getFloat("VectorX"), Package.getFloat("VectorY") });
}

GameComponent * ExampleComponentProducer::Produce(ProducerPackage * Package)
{
	return Produce(*Package);
}
