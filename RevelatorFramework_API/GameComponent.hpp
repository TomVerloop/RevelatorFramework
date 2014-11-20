#pragma once

#include <SFML\Graphics.hpp>
#include <string>

#include "UpdateData.hpp"
#include "Drawable.hpp"
#include "Collidable.hpp"
#include "Sensor.hpp"
#include "Spawner.hpp"

class Spawner;

/*!
* \file GameComponent.hpp
* \class GameComponent
* \brief This Class is the base of every component contained in any game.
* \details This Class is the base of every component contained in any game. It's the container of all interfaces to the game.
* for example the drawable and collidable objects in this abstract class can be specified which interfaces it has and how it 
* should react to their events.
* \author    Tom Verloop
* \version   1.0
* \date      2014-2015
*/

class GameComponent
{
public:


	/*!
	*	\brief The default constructor.
	*/
	__declspec(dllexport) GameComponent();

	/*!
	*	\brief Constructor which takes a position.
	*	\param[in] x The X axis of the position of the component.
	*	\param[in] y The Y axis of the position of the component.
	*/
	__declspec(dllexport) GameComponent(float x, float y);
	
	/*!
	*	\brief Constructor which takes a position.
	*	\param[in] Pos containst the x and y position of the component.
	*/
	__declspec(dllexport) GameComponent(sf::Vector2f Pos);

	/*!
	*	\brief The Update interface method. Used to act on the update signal.
	*	\param[in] updateobject contains the data used in an update.
	*	\pure
	*/
	__declspec(dllexport) virtual void Update(const UpdateData & updateobject) = 0;

	/*!
	*	\brief The collide interface method. Used to act on a collision.
	*	\param[in] colider Contains the component it collided with.
	*	\pure
	*/
	__declspec(dllexport) virtual void Collide(GameComponent * colider) = 0;

	/*!
	*	\brief The Draw interface method. Used to act on the draw signal.
	*	\param[out] window contains the sfml renderwindow to draw upon.
	*	\param[in] offset contains the offset to draw upon.
	*	\pure
	*/
	__declspec(dllexport) virtual void Draw(sf::RenderWindow & window, sf::Vector2f offset) = 0;

	/*!
	*	\brief Returns the position of the object.
	*	\return a 2d float vector containing the position of the object.
	*/
	__declspec(dllexport) sf::Vector2f getPosition(){ return *Position; }

	/*!
	*	\brief sets the position of the object
	*	\param[in] pos Contains a 2d float vector 
	*	containing the position to put this object upon.
	*/
	__declspec(dllexport) void setPosition(sf::Vector2f pos){ Position->x = pos.x; Position->y = pos.y; }
	
	/*!
	*	\brief returns true if the drawable interface has been filled.
	*	\return returns true if the drawable interface has been filled.
	*/
	__declspec(dllexport) bool hasDrawable(){ return drawable != nullptr; }
	
	/*!
	*	\brief returns true if the collidable interface has been filled.
	*	\return returns true if the collidable interface has been filled.
	*/
	__declspec(dllexport) bool hasCollidable(){ return collidable != nullptr; }

	/*!
	*	\brief returns true if the sensor interface has been filled.
	*	\return returns true if the sensor interface has been filled.
	*/
	__declspec(dllexport) bool hasSensor(){ return sensor != nullptr; }

	/*!
	*	\brief returns true if the spawner interface has been filled.
	*	\return returns true if the spawner interface has been filled.
	*/
	__declspec(dllexport) bool hasSpawner(){ return spawner != nullptr; }

	/*!
	*	\brief returns the Drawable interface if it has been filled.
	*	\return returns the Drawable interface if it has been filled.
	*/
	__declspec(dllexport) Drawable * getDrawable(){ return drawable; }

	/*!
	*	\brief returns the Collidable interface if it has been filled.
	*	\return returns the Collidable interface if it has been filled.
	*/
	__declspec(dllexport) Collidable * getCollidable(){ return collidable; }

	/*!
	*	\brief returns the Sensor interface if it has been filled.
	*	\return returns the Sensor interface if it has been filled.
	*/
	__declspec(dllexport) Sensor * getSensor(){ return sensor; }

	/*!
	*	\brief returns the Spawner interface if it has been filled.
	*	\return returns the Spawner interface if it has been filled.
	*/
	__declspec(dllexport) Spawner * getSpawner(){ return spawner; }

	/*!
	*	\brief returns true if the object is decommisioned.
	*	\return returns true if the object is decommisioned.
	*/
	__declspec(dllexport) bool isDead(){ return DeadComponent; }
	
	/*!
	*	\brief sets if this component should be decommisioned.
	*	\param[in] dead if true it decommisions the component.
	*/
	__declspec(dllexport) void setDead(bool dead){ DeadComponent = dead; }

protected:

	//! \brief Containst the name of the gamecomponent.
	std::string Name;
	//! \brief Contains the ID of the gamecomponent.
	int ID;
	//! \brief contains the position of the gamecomponent.
	sf::Vector2f * Position;
	//! \brief contains the drawable interface of the gamecomponent.
	Drawable * drawable;
	//! \brief contains the collidable interface of the gamecomponent.
	Collidable * collidable;
	//! \brief contains the sensor interface of the gamecomponent.
	Sensor * sensor;
	//! \brief contains the spawner interface of the gamecomponent.
	Spawner * spawner;
	//! \brief contains the decommmision state of the component.
	bool DeadComponent;

};