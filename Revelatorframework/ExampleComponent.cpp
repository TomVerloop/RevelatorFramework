#include "ExampleComponent.hpp"
#include <iostream>

void ExampleDrawable::Draw(sf::RenderWindow & window, sf::Vector2f offset)
{
	sf::RectangleShape shape;
	shape.setSize(sf::Vector2f{ 50.f, 50.f });
	shape.setPosition(shape.getPosition() + offset);
	shape.setFillColor(sf::Color::White);
	window.draw(shape);

	shape.setPosition(shape.getPosition() - offset);
}


ExampleComponent::ExampleComponent(sf::Vector2f pos) : GameComponent{pos.x,pos.y}
{
	drawable = new ExampleDrawable();
	collidable = new Collidable(Position, sf::Vector2f{ 50.f, 50.f });
}


ExampleComponent::~ExampleComponent()
{
	delete drawable;

}

void ExampleComponent::Collide(GameComponent * colider)
{

}

void ExampleComponent::Update(UpdateData * updateobject)
{
}

void ExampleComponent::Draw(sf::RenderWindow & window, sf::Vector2f offset)
{
	drawable->Draw(window, (offset + (getPosition())));
}
