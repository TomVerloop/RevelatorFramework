#pragma once
#include <SFML\Graphics.hpp>
class WindowManager
{
public:
	__declspec(dllexport) ~WindowManager();
	__declspec(dllexport) sf::RenderWindow * getWindow();
	__declspec(dllexport) sf::Vector2f getCameraPosition();
	__declspec(dllexport) void setCameraPosition(sf::Vector2f position);
	__declspec(dllexport) void MoveCamera(sf::Vector2f direction);
	__declspec(dllexport) static WindowManager & getInstance();
	__declspec(dllexport) void InitWindow(sf::VideoMode video, std::string Name);
	__declspec(dllexport) WindowManager(const WindowManager & windowmanager) = delete;
	__declspec(dllexport) WindowManager& operator=(const WindowManager & windowmanager) = delete;
private:
	__declspec(dllexport) WindowManager();
	sf::RenderWindow * window;
	sf::Vector2f CameraPosition;
};

