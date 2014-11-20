
#include "Sensor.hpp"



Sensor::Sensor(float Radius, sf::Vector2f * Pos, sf::Vector2f size) : Collidable{ Pos, size }
{
	position = Pos;
	VisionRange = Radius;
}

Sensor::~Sensor()
{

}

void Sensor::addSeenObject(GameComponent * comp)
{
	SeenObjects.push_back(comp);
}

GameComponent * Sensor::getSeenObject()
{	
	GameComponent * comp = SeenObjects.front();
	SeenObjects.pop_front();
	return comp;
}

int Sensor::SeenObjectCount()
{
	return SeenObjects.size();
}

float Sensor::GetVisionRadius()
{
	return VisionRange;
}

void Sensor::DrawVision(sf::RenderWindow & window)
{
	sf::CircleShape c{ VisionRange };
	c.setFillColor(sf::Color::Yellow);
	c.setPosition((position->x - VisionRange / 2 - (Collider.width / 2)), (position->y - VisionRange / 2 - (Collider.height / 2)));
	window.draw(c);
}
