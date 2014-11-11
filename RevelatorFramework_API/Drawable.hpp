#pragma once

#include <SFML\Graphics.hpp>
class Drawable
{
public:
	__declspec(dllexport) Drawable();
	__declspec(dllexport) ~Drawable();
	__declspec(dllexport) virtual void Draw(sf::RenderWindow & window, sf::Vector2f offset) = 0;
};