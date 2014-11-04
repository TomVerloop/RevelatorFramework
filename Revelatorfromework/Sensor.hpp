#pragma once
#include <list>
#include <SFML\Graphics.hpp>
#include "Collidable.hpp"
class GameComponent;

class Sensor : public Collidable
{
public:
	Sensor(float Radius, sf::Vector2f * Pos,sf::Vector2f size);
	~Sensor();
	void addSeenObject(GameComponent * comp);
	GameComponent * getSeenObject();
	int SeenObjectCount();
	float GetVisionRadius();
	void DrawVision(sf::RenderWindow & window);

private:
	float VisionRange;
	std::list<GameComponent * > SeenObjects;
};

