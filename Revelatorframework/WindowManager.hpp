#pragma once
#include <SFML\Graphics.hpp>
class WindowManager
{
public:
	WindowManager(sf::VideoMode videomode, std::string name, sf::Uint32 style = 7U);
	~WindowManager();
	WindowManager(const WindowManager & windowmanager) = delete;
	WindowManager& operator=(const WindowManager & windowmanager) = delete;
	sf::RenderWindow * getWindow();
	sf::Vector2f getCameraPosition();
	void setCameraPosition(sf::Vector2f position);
	void MoveCamera(sf::Vector2f direction);
private:
	sf::RenderWindow window;
	sf::Vector2f CameraPosition;
};

