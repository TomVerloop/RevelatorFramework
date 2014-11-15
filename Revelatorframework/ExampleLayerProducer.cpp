#include "ExampleLayerProducer.hpp"


ExampleLayerProducer::ExampleLayerProducer()
{

}


ExampleLayerProducer::~ExampleLayerProducer()
{

}

Layer * ExampleLayerProducer::Produce()
{
	return new ExampleLayer();
}

Layer * ExampleLayerProducer::Produce(ProducerPackage Package)
{
	return new ExampleLayer();
}

Layer * ExampleLayerProducer::Produce(ProducerPackage * Package)
{
	return new ExampleLayer();
}