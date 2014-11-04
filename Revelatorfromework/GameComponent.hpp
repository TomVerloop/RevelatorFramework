#ifndef _GAME_COMPONENT
#define _GAME_COMPONENT

#include <SFML\Graphics.hpp>
#include <string>
#include "UpdateData.hpp"
#include "ScreenTransaction.hpp"
#include <SFML\Graphics.hpp>
#include "Drawable.hpp"
#include "Collidable.hpp"
#include "Sensor.hpp"
#include "Spawner.hpp"

class Spawner;

class GameComponent
{
public:
	GameComponent();
	GameComponent(float x, float y);
	GameComponent(sf::Vector2f Pos);
	virtual void Update(UpdateData * updateobject) = 0;
	virtual void Collide(GameComponent * colider) = 0;
	virtual void Draw(sf::RenderWindow & window, sf::Vector2f offset) = 0;
	virtual bool hasTransaction(){ return (Transaction != nullptr); }
	virtual void setTransaction(ScreenTransaction * transaction){ Transaction = transaction; }
	virtual ScreenTransaction * getTransaction(){ return Transaction; }
	sf::Vector2f * getPosition(){ return Position; }
	void setPosition(sf::Vector2f * pos){ Position = pos; }
	bool hasDrawable(){ return drawable != nullptr; };
	bool hasCollidable(){ return collidable != nullptr; };
	bool hasSensor(){ return sensor != nullptr; };
	bool hasSpawner(){ return spawner != nullptr; };
	Drawable * getDrawable(){ return drawable; }
	Collidable * getCollidable(){ return collidable; }
	Sensor * getSensor(){ return sensor; }
	Spawner * getSpawner(){ return spawner; }

private:

protected:
	//Standard atributes of a GameComponent
	std::string Name;
	int ID;
	ScreenTransaction * Transaction;
	sf::Vector2f * Position;
	Drawable * drawable;
	Collidable * collidable;
	Sensor * sensor;
	Spawner * spawner;
	
};

#endif // !_GAME_COMPONENT
