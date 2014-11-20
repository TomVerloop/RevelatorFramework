#pragma once
#include "GameScreen.hpp"
#include "ProducerPackage.hpp"

class GameScreen;

/*!
* \file GameScreenProducer.hpp
* \class GameScreenProducer
* \brief This class is responsible for producing custom gamescreens.
* \details This abstract class is responsible for the creation of custom game screens.
* \author    Tom Verloop
* \version   1.0
* \date      2014-2015
*/

class GameScreenProducer
{
public:
	
	/*!
	*	\brief The default constructor.
	*/
	__declspec(dllexport) GameScreenProducer();
	
	/*!
	*	\brief The destructor.
	*/
	__declspec(dllexport) ~GameScreenProducer();

	/*!
	*	\brief A pure virtual function for producing gamescreen without a producer packages.
	*	\return Returns a pointer to the constructed gamescreen.
	*	\pure
	*/
	__declspec(dllexport) virtual GameScreen * Produce() = 0;
	
	/*!
	*	\brief A pure virtual function for producing gamescreen with producer packages.
	*	\param[in] package contains a reference to a producerpackage used to construct the gamescreen with.
	*	\return Returns a pointer to the constructed gamescreen.
	*	\pure
	*/
	__declspec(dllexport) virtual GameScreen * Produce(ProducerPackage Package) = 0;
	
	/*!
	*	\brief A pure virtual function for producing gamescreen with producer packages.
	*	\param[in] package contains a pointer to a producerpackage used to construct the gamescreen with.
	*	\return Returns a pointer to the constructed gamescreen.
	*	\pure
	*/
	__declspec(dllexport) virtual GameScreen * Produce(ProducerPackage * Package) = 0;
};

