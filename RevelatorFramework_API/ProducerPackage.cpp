#include "stdafx.h"
#include "ProducerPackage.hpp"


ProducerPackage::ProducerPackage()
{
}


ProducerPackage::~ProducerPackage()
{
}


void PutValue(std::string key, int value);
void PutValue(std::string key, std::string value);
void PutValue(std::string key, bool value);
void PutValue(std::string key, float value);
void PutValue(std::string key, double value);
void PutValue(std::string key, long value);