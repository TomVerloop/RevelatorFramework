#pragma once

#include "Chunk.hpp"
#include "GameComponent.hpp"
#include "Drawable.hpp"

class Chunk;

	/*!
	* \file ChunkManager.hpp
	* \class ChunkManager
	* \brief This class contains a reference to the first chunk. and the one the camera hovers above.
	* \details This class contains a reference to the first chunk. and the one the camera hovers above.
	* It sends both the update and draw signal to the chunks. although the update method goes to the firstchunk.
	* and then is rippeled through to the others. And the draw signal goes to the active chunk and only its neighbors.
	* Furthermore it can add components to the chunks.
	* \author    Tom Verloop
	* \version   1.0
	* \date      2014-2015
	*/

class ChunkManager
{
public:
	/*!
	*	\brief The constructor.
	*/
	__declspec(dllexport) ChunkManager();

	/*!
	*	\brief The deconstructor.
	*/
	__declspec(dllexport) ~ChunkManager();

	/*!
	*	\brief Sends the update signal to the first chunk for it to ripple through the rest.
	*	\param[in] updateobject contains the data for the update event.
	*/
	__declspec(dllexport) void Update(const UpdateData & updateobject);

	/*!
	*	\brief Sends the draw signal to the active chunk for it to ripple through the rest.
	*	\param[out] window Contains the sfml renderwindow wich is drawn upon.
	*	\param[in] offset Contains the offset used to draw the objects.
	*/
	__declspec(dllexport) void Draw(sf::RenderWindow & window, sf::Vector2f offset);

	/*!
	*	\brief Sets a chunk as the active chunk. Result will probably be overridden by the camera.
	*	\param[out] c Contains the chunk to set as active.
	*/
	__declspec(dllexport) void setActiveChunk(Chunk * c);

	/*!
	*	\brief Sets a chunk as the first chunk.
	*	\param[out] c Contains the chunk to set as first chunk.
	*/
	__declspec(dllexport) void setFirstChunk(Chunk * c);

	/*!
	*	\brief Adds a component to the first chunk which is then pushed through the chunks untill its in the correct chunk.
	*	\param[out] c Contains the component to add.
	*/
	__declspec(dllexport) void addGameComponent(GameComponent * c);



private:
	//! \brief Contains a pointer to the Active Chunk.
	Chunk * ActiveChunk;
	//! \brief Contains a pointer to the First Chunk.
	Chunk * FirstChunk;
};

