#include "ExampleScreenProducer.hpp"


ExampleScreenProducer::ExampleScreenProducer()
{

}

ExampleScreenProducer::~ExampleScreenProducer()
{

}

GameScreen * ExampleScreenProducer::Produce()
{
	return new ExampleTestScreen();
}

GameScreen * ExampleScreenProducer::Produce(ProducerPackage Package)
{
	return new ExampleTestScreen();
}

GameScreen * ExampleScreenProducer::Produce(ProducerPackage * Package)
{
	return new ExampleTestScreen();
}