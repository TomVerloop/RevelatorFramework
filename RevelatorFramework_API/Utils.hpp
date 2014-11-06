#pragma once
class Utils
{
public:
	__declspec(dllexport) ~Utils();
	__declspec(dllexport) static Utils & getInstance();
	__declspec(dllexport) Utils(const Utils &utils) = delete;
	__declspec(dllexport) Utils& operator=(const Utils &utils) = delete;
private:

	__declspec(dllexport) Utils();
};

