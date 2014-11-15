#pragma once

#include <SFML\Graphics.hpp>
#include <string>

#include "UpdateData.hpp"
#include "Drawable.hpp"
#include "Collidable.hpp"
#include "Sensor.hpp"
#include "Spawner.hpp"

class Spawner;

class GameComponent
{
public:

	__declspec(dllexport) GameComponent();
	__declspec(dllexport) GameComponent(float x, float y);
	__declspec(dllexport) GameComponent(sf::Vector2f Pos);
	__declspec(dllexport) virtual void Update(const UpdateData & updateobject) = 0;
	__declspec(dllexport) virtual void Collide(GameComponent * colider) = 0;
	__declspec(dllexport) virtual void Draw(sf::RenderWindow & window, sf::Vector2f offset) = 0;
	__declspec(dllexport) sf::Vector2f getPosition(){ return *Position; }
	__declspec(dllexport) void setPosition(sf::Vector2f pos){ Position->x = pos.x; Position->y = pos.y; }
	__declspec(dllexport) bool hasDrawable(){ return drawable != nullptr; }
	__declspec(dllexport) bool hasCollidable(){ return collidable != nullptr; }
	__declspec(dllexport) bool hasSensor(){ return sensor != nullptr; }
	__declspec(dllexport) bool hasSpawner(){ return spawner != nullptr; }
	__declspec(dllexport) Drawable * getDrawable(){ return drawable; }
	__declspec(dllexport) Collidable * getCollidable(){ return collidable; }
	__declspec(dllexport) Sensor * getSensor(){ return sensor; }
	__declspec(dllexport) Spawner * getSpawner(){ return spawner; }
	__declspec(dllexport) bool isDead(){ return DeadComponent; }
	__declspec(dllexport) void setDead(bool dead){ DeadComponent = dead; }

protected:

	//Standard atributes of a GameComponent
	std::string Name;
	int ID;
	sf::Vector2f * Position;
	Drawable * drawable;
	Collidable * collidable;
	Sensor * sensor;
	Spawner * spawner;
	bool DeadComponent;

};