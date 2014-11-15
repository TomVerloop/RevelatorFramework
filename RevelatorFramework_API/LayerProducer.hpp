#pragma once
#include "Layer.hpp"
#include "ProducerPackage.hpp"
class LayerProducer
{
public:
	__declspec(dllexport) LayerProducer();
	__declspec(dllexport) ~LayerProducer();
	__declspec(dllexport) virtual Layer * Produce() = 0;
	__declspec(dllexport) virtual Layer * Produce(ProducerPackage Package) = 0;
	__declspec(dllexport) virtual Layer * Produce(ProducerPackage * Package) = 0;
};

