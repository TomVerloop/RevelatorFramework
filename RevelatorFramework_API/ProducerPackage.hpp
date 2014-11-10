#pragma once
#include <map>

class ProducerPackage
{
public:
	__declspec(dllexport)  ProducerPackage();
	__declspec(dllexport) ~ProducerPackage();
	__declspec(dllexport) void PutValue(std::string key, int value){ Ints[key] = value; }
	__declspec(dllexport) void PutValue(std::string key, std::string value){ Strings[key] = value; }
	__declspec(dllexport) void PutValue(std::string key, bool value){ Bools[key] = value; }
	__declspec(dllexport) void PutValue(std::string key, float value){ Floats[key] = value; }
	__declspec(dllexport) void PutValue(std::string key, double value){ Doubles[key] = value; }
	__declspec(dllexport) void PutValue(std::string key, long value){ Longs[key] = value; }
	__declspec(dllexport) int getInt(std::string key){ return Ints[key]; }
	__declspec(dllexport) std::string getString(std::string key){ return Strings[key]; }
	__declspec(dllexport) bool getBool(std::string key){ return Bools[key]; }
	__declspec(dllexport) float getFloat(std::string key){ return Floats[key]; }
	__declspec(dllexport) double getDouble(std::string key){ return Doubles[key]; }
	__declspec(dllexport) long getLong(std::string key){ return Longs[key]; }
private:
	std::map<std::string, int> Ints;
	std::map<std::string, std::string> Strings;
	std::map<std::string, bool> Bools;
	std::map<std::string, float> Floats;
	std::map<std::string, double> Doubles;
	std::map<std::string, long> Longs;
};

