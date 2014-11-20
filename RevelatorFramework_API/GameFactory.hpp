#pragma once

#include <string>
#include <fstream>

#include "GameScreen.hpp"
#include "Chunk.hpp"
#include "ChunkManager.hpp"
#include "Layer.hpp"
#include "ScreenManager.hpp"
#include "GameObjectProducer.hpp"
#include "LayerProducer.hpp"
#include "GameScreenProducer.hpp"

class GameScreen;
class GameObjectProducer;
class Chunk;
class LayerProducer;
class GameScreenProducer;

/*!
* \file GameFactory.hpp
* \class GameFactory
* \brief This Singleton Manages the creation and deletion of almost any component where there is a Producer for.
* \details This Class is Singleton defined. It creates and deletes all components made by a Producer. It can make
* those from text files located in the resource folder.
* \author    Tom Verloop
* \version   1.0
* \date      2014-2015
* \warning   A Singleton
*/

class GameFactory
{
public:
	
	/*!
	*	\brief The default destructor.
	*/
	__declspec(dllexport) ~GameFactory();
	
	/*!
	*	\brief Produces a gamescreen from text according to its name.
	*	\param[in] screenname Containst the name of the screen to make.
	*	\return returns a pointer to a game screen.
	*/
	__declspec(dllexport) GameScreen * ProduceScreen(std::string screenname);
	
	/*!
	*	\brief creates a instance of the gamefactory and returns a reference to it.
	*	\return Contains the singleton instance of the gamefactory
	*/
	__declspec(dllexport) static GameFactory & getInstance();

	/*!
	*	\brief Registers a component producer to the factory which it can use to make new components.
	*	\param[in] Name Contains the name on which the producer can be called.
	*	\param[in] producer Contains a pointer to the object producer to register.
	*/
	__declspec(dllexport) void RegisterObjectProducer(std::string Name, GameObjectProducer * producer);

	/*!
	*	\brief Registers a layer producer to the factory which it can use to make new layers.
	*	\param[in] Name Contains the name on which the producer can be called.
	*	\param[in] producer Contains a pointer to the layer producer to register.
	*/
	__declspec(dllexport) void RegisterLayerProducer(std::string Name, LayerProducer * producer);

	/*!
	*	\brief Registers a Screen producer to the factory which it can use to make new layers.
	*	\param[in] Name Contains the name on which the producer can be called.
	*	\param[in] producer Contains a pointer to the screen producer to register.
	*/
	__declspec(dllexport) void RegisterScreenProducer(std::string Name, GameScreenProducer * producer);

	/*!
	*	\brief Produces a game object with the registered producer.
	*	\param[in] Name Contains the name of the producer to use.
	*	\return returns a pointer to the newly created GameComponent.
	*/
	__declspec(dllexport) GameComponent * ProduceGameObject(std::string Name);

	/*!
	*	\brief Produces a game object with the registered producer.
	*	\param[in] Name Contains the name of the producer to use.
	*	\param[in] package Contains the parameters the producer uses to construct the new object.
	*	\return returns a pointer to the newly created GameComponent.
	*/
	__declspec(dllexport) GameComponent * ProduceGameObject(std::string Name, ProducerPackage package);
	
	/*!
	*	\brief deletes all components maked as dead.
	*/
	__declspec(dllexport) void DeleteDecommisioned();

	/*!
	*	\brief deleted copy constructor.
	*/
	__declspec(dllexport) GameFactory(const GameFactory &utils) = delete;

	/*!
	*	\brief deleted assignment opperator.
	*/
	__declspec(dllexport) GameFactory& operator=(const GameFactory &utils) = delete;

private:
	
	/*!
	*	\brief the default constructor.
	*/
	__declspec(dllexport) GameFactory();

	/*!
	*	\brief Produces a layer by values provided by the function  GameFactory::ProduceScreen
	*	\param[in] layername Contains the name of the layer to construct.
	*	\param[in] ChunkSize Contains the size all chunks in the layer should be.
	*	\param[in] Chunks Contains the ammount of chunks there should be on a row.
	*	\param[in] enabled Contains the boolean value for if the layer should be enabled.
	*	\param[in] willupdate Contains the boolean value for if the layer should update.
	*	\param[in] willdraw contains the boolean value for if the layer should draw.
	*	\param[in] package contains the parameters for the producer to use to construct the layer.
	*	\param[in] layertype contains the layer typename.
	*/
	__declspec(dllexport) Layer * ProduceLayer(std::string layername, int ChunkSize, const int Chunks, bool enabled, bool willupdate, bool willdraw, ProducerPackage package, std::string layertype);
	
	//! \brief contains a linked list of all layers.
	std::list<Layer *> Layers;
	//! \brief contains a linked list of all chunks.
	std::list<Chunk *> Chunks;
	//! \brief contains a linked list of all screens.
	std::list<GameScreen *> Screens;
	//! \brief  contains a linked list of all components.
	std::list<GameComponent * > Components;
	//! contains a map of all object producers.
	std::map<std::string, GameObjectProducer *> ObjectProducers;
	//! contains a map of all screen producers.
	std::map<std::string, GameScreenProducer *> ScreenProducers;
	//! contains a map of all layer producers.
	std::map<std::string, LayerProducer *> LayerProducers;
};

