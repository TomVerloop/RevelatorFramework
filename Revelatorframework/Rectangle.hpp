#pragma once
#include <SFML\Graphics.hpp>
class Rectangle :
	public sf::Rect<float>
{
public:
	Rectangle();
	Rectangle(sf::Vector2f position, sf::Vector2f size);
	~Rectangle();
	sf::Vector2f getCenter();
};

