#pragma once
#include <GameComponent.hpp>
#include <Drawable.hpp>
#include <Collidable.hpp>

class ExampleDrawable : public Drawable
{
public:
	void Draw(sf::RenderWindow & window, sf::Vector2f offset) override;
};

class ExampleComponent :
	public GameComponent
{
public:
	ExampleComponent(sf::Vector2f pos = sf::Vector2f{0.f,0.f});
	void Collide(GameComponent * colider) override;
	~ExampleComponent();
	void Update(UpdateData * updateobject) override;
	void Draw(sf::RenderWindow & window,sf::Vector2f offset);
};

