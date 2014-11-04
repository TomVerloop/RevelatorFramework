#include "Utils.hpp"


Utils::Utils()
{
}


Utils::~Utils()
{
}


Utils & Utils::getInstance()
{
	static Utils u;
	return u;
}