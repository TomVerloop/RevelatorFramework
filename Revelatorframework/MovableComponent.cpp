#include "MovableComponent.hpp"
#include <iostream>
#include <SFML\Graphics.hpp>
#include "ExampleComponent.hpp"

MovableComponent::MovableComponent(sf::Vector2f pos) : GameComponent{ pos.x, pos.y }
{
	drawable = new ExampleDrawable();
	sensor = new Sensor(100.f, Position, sf::Vector2f{ 50.f, 50.f });
	collidable = sensor;
}


MovableComponent::~MovableComponent()
{
	delete drawable;
	delete sensor;
}

void MovableComponent::Collide(GameComponent * colider)
{

}

void MovableComponent::Update(const UpdateData & updateobject)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		this->Position->y -= 0.1f;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		this->Position->y += 0.1f;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		this->Position->x -= 0.1f;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		this->Position->x += 0.1f;
	}

	for (int i = 0; i < sensor->SeenObjectCount(); i++)
	{
		GameComponent * p = sensor->getSeenObject();
	}
	WindowManager::getInstance().setCameraPosition(sf::Vector2f{ this->Position->x, this->Position->y });
}

void MovableComponent::Draw(sf::RenderWindow & window, sf::Vector2f offset)
{
	drawable->Draw(window, offset + getPosition());
}