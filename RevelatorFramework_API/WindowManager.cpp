
#include "WindowManager.hpp"

WindowManager::WindowManager()
{
	window = nullptr;
}


WindowManager::~WindowManager()
{
	if (window != nullptr)
	{
		delete window;
		window = nullptr;
	}
}


sf::RenderWindow * WindowManager::getWindow()
{
	return window;
}

sf::Vector2f WindowManager::getCameraPosition()
{
	return CameraPosition;
}

void WindowManager::setCameraPosition(sf::Vector2f position)
{
	CameraPosition = position;
	sf::View v = window->getDefaultView();
	v.setCenter(CameraPosition);
	window->setView(v);
}


void WindowManager::MoveCamera(sf::Vector2f direction)
{
	CameraPosition += direction;
	setCameraPosition(CameraPosition);
}


WindowManager & WindowManager::getInstance()
{
	static WindowManager window;
	return window;
}


void WindowManager::InitWindow(sf::VideoMode video,std::string Name)
{
	if (window != nullptr)
	{
		delete window;
		window = nullptr;
	}
	window = new sf::RenderWindow(sf::VideoMode::VideoMode(1920,1080), Name,sf::Style::Fullscreen);
}
