#include "stdafx.h"
#include "Mouse.hpp"


Mouse::Mouse()
{
	Update();
}


Mouse::~Mouse()
{
}

Mouse & Mouse::getInstance()
{
	static Mouse mouse;
	return mouse;
}


void Mouse::Update()
{
	MouseLeft = sf::Mouse::isButtonPressed(sf::Mouse::Left);
	MouseRight = sf::Mouse::isButtonPressed(sf::Mouse::Right);
	MouseMiddle = sf::Mouse::isButtonPressed(sf::Mouse::Middle);
	MouseXButton1 = sf::Mouse::isButtonPressed(sf::Mouse::XButton1);
	MouseXButton2 = sf::Mouse::isButtonPressed(sf::Mouse::XButton2);
	MousePosition = sf::Vector2f{ static_cast<float>(sf::Mouse::getPosition().x), static_cast<float>(sf::Mouse::getPosition().y) };
}