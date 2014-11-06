#pragma once
#include <SFML\Graphics.hpp>
class Rectangle :
	public sf::Rect<float>
{
public:
	__declspec(dllexport) Rectangle();
	__declspec(dllexport) Rectangle(sf::Vector2f position, sf::Vector2f size);
	__declspec(dllexport) ~Rectangle();
	__declspec(dllexport) sf::Vector2f getCenter();
};

