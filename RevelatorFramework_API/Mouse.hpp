#pragma once

#include <SFML\Graphics.hpp>

/*!
* \file Mouse.hpp
* \class Mouse
* \brief This Singleton Manages the mouse clicks and positions.
* \details This Class is Singleton defined. It holds it manages all mouse buttons and the position relative to the screen of it.
* \author    Tom Verloop
* \version   1.0
* \date      2014-2015
* \warning   A Singleton
*/

class Mouse
{
public:

	/*!
	*	\brief The Destructor
	*/
	__declspec(dllexport) ~Mouse();

	/*!
	*	\brief This static function returns a Singleton reference to the Mouse.
	*	\return A Refrence to the Mouse.
	*/
	__declspec(dllexport) static Mouse & getInstance();

	//!	\brief Deleted copy constructor.
	__declspec(dllexport) Mouse(const Mouse &mouse) = delete;

	//!	\brief Deleted assignment opperator.
	__declspec(dllexport) Mouse& operator=(const Mouse &mouse) = delete;

	/*!
	*	\Brief returns true if the Left Mouse button ispressed.
	*	\brief returns true if the button is pressed.
	*/
	__declspec(dllexport) bool getLeft(){ return MouseLeft; }

	/*!
	*	\Brief returns true if the right Mouse button ispressed.
	*	\brief returns true if the button is pressed.
	*/
	__declspec(dllexport) bool getRight(){ return MouseRight; }

	/*!
	*	\Brief returns true if the middle Mouse button ispressed.
	*	\brief returns true if the button is pressed.
	*/
	__declspec(dllexport) bool getMiddle(){ return MouseMiddle; }

	/*!
	*	\Brief returns true if the first extra mouse button ispressed.
	*	\brief returns true if the button is pressed.
	*/
	__declspec(dllexport) bool getXButton1(){ return MouseXButton1; }

	/*!
	*	\Brief returns true if the second extra mouse button ispressed.
	*	\brief returns true if the button is pressed.
	*/
	__declspec(dllexport) bool getXButton2(){ return MouseXButton2; }

	/*!
	*	\Brief returns the position of the mouse relative to the screen.
	*	\return a 2d float vector containing the position.
	*/
	__declspec(dllexport) sf::Vector2f getMousePosition(){ return MousePosition; }

	/*!
	*	\brief Updates all values that this object holds.
	*/
	__declspec(dllexport) void Update();
private:

	/*!
	*	\brief The default constructor.
	*/
	__declspec(dllexport) Mouse();


	//! \brief Contains The status of the Left Mouse Button.
	bool MouseLeft;
	//! \brief Contains The status of the Right Mouse Button.
	bool MouseRight;
	//! \brief Contains The status of the Middle Mouse Button.
	bool MouseMiddle;
	//! \brief Contains The status of the First Extra Mouse Button.
	bool MouseXButton1;
	//! \brief Contains The status of the Second Extra Mouse Button.
	bool MouseXButton2;
	//! \brief Contains the position of the mouse.
	sf::Vector2f MousePosition;
};

