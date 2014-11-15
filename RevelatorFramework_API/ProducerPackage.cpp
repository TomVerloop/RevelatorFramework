#include "stdafx.h"
#include "ProducerPackage.hpp"


ProducerPackage::ProducerPackage()
{
}


ProducerPackage::~ProducerPackage()
{
}


void ProducerPackage::clear()
{
	Ints.clear();
	Strings.clear();
	Bools.clear();
	Floats.clear();
	Doubles.clear();
	Longs.clear();
}