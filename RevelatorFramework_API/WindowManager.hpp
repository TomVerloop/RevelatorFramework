#pragma once
#include <SFML\Graphics.hpp>
class WindowManager
{
public:
	__declspec(dllexport) WindowManager(sf::VideoMode videomode, std::string name, sf::Uint32 style = 7U);
	__declspec(dllexport) ~WindowManager();
	__declspec(dllexport) WindowManager(const WindowManager & windowmanager) = delete;
	__declspec(dllexport) WindowManager& operator=(const WindowManager & windowmanager) = delete;
	__declspec(dllexport) sf::RenderWindow * getWindow();
	__declspec(dllexport) sf::Vector2f getCameraPosition();
	__declspec(dllexport) void setCameraPosition(sf::Vector2f position);
	__declspec(dllexport) void MoveCamera(sf::Vector2f direction);
private:
	sf::RenderWindow window;
	sf::Vector2f CameraPosition;
};

