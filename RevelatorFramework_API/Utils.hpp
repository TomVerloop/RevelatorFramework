#pragma once

#include <string>
#include <iostream>
#include <fstream>

class Utils
{
public:
	__declspec(dllexport) ~Utils();
	__declspec(dllexport) static Utils & getInstance();
	__declspec(dllexport) Utils(const Utils &utils) = delete;
	__declspec(dllexport) Utils& operator=(const Utils &utils) = delete;

	__declspec(dllexport) void log(std::string place, std::string message);
	__declspec(dllexport) void setPrintLog(bool b){ PrintLog = b; }
private:

	__declspec(dllexport) Utils();
	bool PrintLog;
	std::ofstream output;
};

