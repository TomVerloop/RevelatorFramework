#pragma once

#include <SFML\Graphics.hpp>

/*!
* \file AudioManager.hpp
* \class AudioManager
* \brief This Abstract Class holds data used to manage the drawing of a gamecomponent.
* \details This class purely is used to draw a component on the screen. 
* If a gamecomponent holds one of these it will execute the pure virtual draw method.
* \author    Tom Verloop
* \version   1.0
* \date      2014-2015
*/

class Drawable
{
public:
	/*!
	*	\brief The default constructor.
	*/
	__declspec(dllexport) Drawable();

	/*!
	*	\brief The destructor.
	*/
	__declspec(dllexport) ~Drawable();

	/*!
	*	\brief This pure virtual method will be responsible for drawing on the screen.
	*	\param[out] window contains the sfml renderwindow used to draw upon.
	*	\param[in] contains the offset at which the component will be drawn.
	*/
	__declspec(dllexport) virtual void Draw(sf::RenderWindow & window, sf::Vector2f offset) = 0;
};