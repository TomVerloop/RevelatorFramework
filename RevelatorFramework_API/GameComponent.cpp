
#include "GameComponent.hpp"

GameComponent::GameComponent() :
drawable{ nullptr },
collidable{ nullptr },
sensor{ nullptr },
spawner{ nullptr }
{
	Position = new sf::Vector2f();
}

GameComponent::GameComponent(float x, float y) : 
drawable{ nullptr },
collidable{ nullptr },
sensor{ nullptr },
spawner{ nullptr }
{
	Position = new sf::Vector2f(x,y);
}

GameComponent::GameComponent(sf::Vector2f Pos) :
drawable{ nullptr },
collidable{ nullptr },
sensor{ nullptr },
spawner{ nullptr }
{
	Position = new sf::Vector2f(Pos.x, Pos.y);
}