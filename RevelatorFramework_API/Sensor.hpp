#pragma once
#include <list>
#include <SFML\Graphics.hpp>
#include "Collidable.hpp"
class GameComponent;

class Sensor : public Collidable
{
public:
	__declspec(dllexport) Sensor(float Radius, sf::Vector2f * Pos, sf::Vector2f size);
	__declspec(dllexport) ~Sensor();
	__declspec(dllexport) void addSeenObject(GameComponent * comp);
	__declspec(dllexport) GameComponent * getSeenObject();
	__declspec(dllexport) int SeenObjectCount();
	__declspec(dllexport) float GetVisionRadius();
	__declspec(dllexport) void DrawVision(sf::RenderWindow & window);

private:
	float VisionRange;
	std::list<GameComponent * > SeenObjects;
};

