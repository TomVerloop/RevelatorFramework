#pragma once

#include <SFML\Graphics.hpp>

#include "Drawable.hpp"

/*!
* \file Collidable.hpp
* \class Collidable
* \brief This Class holds data used to manage the collision of a gamecomponent.
* \details This class holds an size and positon to calculate its collision to any other collidable.
* any gamecomponent holding one wil be checked on collision if the hasMoved is set to true.
* Cause any component that has not moved can't collide. (this does not mean it can't be collided to. its just never the cause of collision.)
* \author    Tom Verloop
* \version   1.0
* \date      2014-2015
*/

class Collidable
{
public:

	/*!
	*	\brief The constructor
	*/
	__declspec(dllexport) Collidable();

	/*!
	*	\brief The constructor wich keeps it at the same position as the gamecomponent.
	*	\paramp[in] position Contains a pointer to the position of the gamecomponent. used to keep them on the same place.
	*	\paramp[in] size contains the size of the components.
	*/
	__declspec(dllexport) Collidable(sf::Vector2f * position, sf::Vector2f size);

	/*!
	*	\brief The Destructor
	*/
	__declspec(dllexport) ~Collidable();

	/*!
	*	\brief returns a sf::FloatRect containing the position and size of the component.
	*	\return Contains a sf::FloatRect containing the position and size of the component.
	*/
	__declspec(dllexport) sf::Rect<float> getCollider();

	/*!
	*	\brief returns if the component has moved since the last call to this function.
	*	\return contains true if the component has moved.
	*/
	__declspec(dllexport) bool isMoved();

private:

protected:

	//! \brief Contains a boolean true value if the component has moved.
	bool hasMoved;
	//! \brief Contains a pointer to the position of the component.
	sf::Vector2f * position;
	//! \brief Contains the sf::FloatRect containing the position and size of the component.
	sf::Rect<float> Collider;
	//! \brief Contains the previous position used to see if the component has moved.
	sf::Vector2f lastpos;
};