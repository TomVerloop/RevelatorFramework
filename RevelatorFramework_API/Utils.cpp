
#include "Utils.hpp"

Utils::Utils() : 
PrintLog{ false },
output{ "log.txt" }
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

void Utils::log(std::string place, std::string message)
{
	if (PrintLog)
	{
		//std::cout << message << " at: " << place << "\n";
	}
	output << message << "\n";
}