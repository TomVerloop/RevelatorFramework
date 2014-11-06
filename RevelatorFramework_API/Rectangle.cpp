#include "Rectangle.hpp"


Rectangle::Rectangle()
{
}


Rectangle::Rectangle(sf::Vector2f position, sf::Vector2f size) :Rect<float>{position,size}
{

}

Rectangle::~Rectangle()
{
}


sf::Vector2f Rectangle::getCenter()
{
	return sf::Vector2f{ left + (width / 2), top + (height / 2) };
}
