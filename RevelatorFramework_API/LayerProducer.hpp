#pragma once

#include "Layer.hpp"
#include "ProducerPackage.hpp"

/*!
* \file LAyerProducer.hpp
* \class LayerProducer
* \brief This Abstract class is used to produce any LAyer.
* \details By implementing this abstract class you can register that
* class to create custom Layers for your game.
* \author    Tom Verloop
* \version   1.0
* \date      2014-2015
*/

class LayerProducer
{
public:

	/*!
	*	\brief the default contstructor.
	*/
	__declspec(dllexport) LayerProducer();

	/*!
	*	\brief the destructor.
	*/
	__declspec(dllexport) ~LayerProducer();

	/*!
	*	\brief A pure virtual function for producing layers without producer packages.
	*	\return Returns a pointer to the constructed layer.
	*	\pure
	*/
	__declspec(dllexport) virtual Layer * Produce() = 0;

	/*!
	*	\brief A pure virtual function for producing layers with producer packages.
	*	\param[in] package contains a reference to a producerpackage used to construct the layer with.
	*	\return Returns a pointer to the constructed layer.
	*	\pure
	*/
	__declspec(dllexport) virtual Layer * Produce(ProducerPackage Package) = 0;
	
	/*!
	*	\brief A pure virtual function for producing layers with producer packages.
	*	\param[in] package contains a pointer to a producerpackage used to construct the layer with.
	*	\return Returns a pointer to the constructed layer.
	*	\pure
	*/
	__declspec(dllexport) virtual Layer * Produce(ProducerPackage * Package) = 0;
};

