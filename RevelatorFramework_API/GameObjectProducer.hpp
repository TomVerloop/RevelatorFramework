#pragma once

#include "ProducerPackage.hpp"
#include "GameComponent.hpp"

/*!
* \file GameObjectProducer.hpp
* \class GameObjectProducer
* \brief This Abstract class is used to produce any gamecomponent.
* \details By implementing this abstract class you can register that 
* class to create custom components for your game.
* \author    Tom Verloop
* \version   1.0
* \date      2014-2015
*/

class GameObjectProducer
{
public:
	/*!
	*	\brief the default contstructor.
	*/
	__declspec(dllexport) GameObjectProducer();
	
	/*!
	*	\brief the destructor.
	*/
	__declspec(dllexport) ~GameObjectProducer();

	/*!
	*	\brief A pure virtual function for producing game components without producer packages.
	*	\return Returns a pointer to the constructed gamecomponent.
	*	\pure
	*/
	__declspec(dllexport) virtual GameComponent * Produce() = 0;
	
	/*!
	*	\brief A pure virtual function for producing game components with producer packages.
	*	\param[in] package contains a reference to a producerpackage used to construct the game component with.
	*	\return Returns a pointer to the constructed gamecomponent.
	*	\pure
	*/
	__declspec(dllexport) virtual GameComponent * Produce(ProducerPackage Package) = 0;
	
	/*!
	*	\brief A pure virtual function for producing game components with producer packages.
	*	\param[in] package contains a pointer to a producerpackage used to construct the game component with.
	*	\return Returns a pointer to the constructed gamecomponent.
	*	\pure
	*/
	__declspec(dllexport) virtual GameComponent * Produce(ProducerPackage * Package) = 0;
};

