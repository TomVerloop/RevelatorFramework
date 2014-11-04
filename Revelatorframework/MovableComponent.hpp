#pragma once
#include "GameComponent.hpp"
class MovableComponent :
	public GameComponent
{
public:
	MovableComponent(sf::Vector2f pos);
	~MovableComponent();
	void Collide(GameComponent * colider) override;
	void Update(UpdateData * updateobject) override;
	void Draw(sf::RenderWindow & window, sf::Vector2f offset);
};

