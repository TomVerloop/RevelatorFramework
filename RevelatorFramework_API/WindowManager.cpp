#include "WindowManager.hpp"


WindowManager::WindowManager(sf::VideoMode videomode, std::string name, sf::Uint32 style) :window{videomode,name,style}
{
}


WindowManager::~WindowManager()
{
}


sf::RenderWindow * WindowManager::getWindow()
{
	return &window;
}

sf::Vector2f WindowManager::getCameraPosition()
{
	return CameraPosition;
}

void WindowManager::setCameraPosition(sf::Vector2f position)
{
	CameraPosition = position;
	sf::View v = window.getDefaultView();
	v.setCenter(CameraPosition);
	window.setView(v);
}


void WindowManager::MoveCamera(sf::Vector2f direction)
{
	CameraPosition += direction;
	setCameraPosition(CameraPosition);
}

