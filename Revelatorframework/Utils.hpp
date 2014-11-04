#pragma once
class Utils
{
public:
	~Utils();
	static Utils & getInstance();
	Utils(const Utils &utils) = delete;
	Utils& operator=(const Utils &utils) = delete;
private:

	Utils();
};

