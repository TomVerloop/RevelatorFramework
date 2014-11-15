#pragma once
#include <LayerProducer.hpp>
#include "ExampleLayer.hpp"
class ExampleLayerProducer :
	public LayerProducer
{
public:
	ExampleLayerProducer();
	~ExampleLayerProducer();
	Layer * Produce() override;
	Layer * Produce(ProducerPackage Package) override;
	Layer * Produce(ProducerPackage * Package) override;
};

