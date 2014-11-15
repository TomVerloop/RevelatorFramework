#pragma once

#include <list>

#include "GameComponent.hpp"
#include "Drawable.hpp"
#include "Collidable.hpp"

enum __declspec(dllexport) Position
{
	topleft, top, topright, center, left, right, bottomleft, bottom, bottomright
};

/*!
* \file Chunk.hpp
* \class Chunk
* \brief This Class represents a small portion of a screen.
* \details This Class represents a small portion of a screen. it makes sure nothing more is drawn than necessary.
* It handles its own draw and that of the neigboring chunks. and it holds all components that are at its location.
* further more it handles the vision and collision of the components in it.
* \author    Tom Verloop
* \version   1.0
* \date      2014-2015
* \bug anything with a vision greater that one chunk next to it is useless.
*/

class Chunk : public Drawable
{
public:

	/*!
	*	\brief The constructor.
	*	\param[in] ChunkCoord contains the coordinates used to calculate its real position on the screen.
	*	\param[in] size contains the size of the chunk used to contain its components in.
	*	
	*/
	__declspec(dllexport)  Chunk(sf::Vector2i ChunkCoord, float size = 0.f);

	/*!
	*	\brief The Deconstructor.
	*/
	__declspec(dllexport)  ~Chunk();

	/*!
	*	\brief This method adds a gamecomponent to the chunk or pushes it to the next if it is out of bounds.
	*	\param[in] component contains a pointer to the component it is supposed to hold.
	*/
	__declspec(dllexport) void  addComponent(GameComponent * component);

	/*!
	*	\brief This method pushes the update signal to all its components.
	*	\param[in] updateobject contains a reference to the updateobject containing updatedata.
	*/
	__declspec(dllexport) void  Update(const UpdateData & updateobject);

	/*!
	*	\brief This method pushes the DrawSelf signal to all its neighboring chunks and itself.
	*	\param[in] window holds an reference to the renderwindow to draw upon.
	*	\param[in] offset holds an position to add to the one of the component.
	*/
	__declspec(dllexport) void  Draw(sf::RenderWindow & window, sf::Vector2f offset) override;

	/*!
	*	\brief This method pushes the draw signal to all its components.
	*	\param[in] window holds an reference to the renderwindow to draw upon.
	*	\param[in] offset holds an position to add to the one of the component.
	*	\param[in] offset holds an position from where the draw method was called on the screen.
	*/
	__declspec(dllexport) void  DrawSelf(sf::RenderWindow & window, sf::Vector2f offset, Position pos);

	/*!
	*	\brief This method sets a chunk as the chunk to the top left.
	*	\param[in] lefttop contains a pointer to the chunk that should be to the top left.
	*/
	__declspec(dllexport) void  setLeftTop(Chunk *	lefttop);

	/*!
	*	\brief This method sets a chunk as the chunk to the top.
	*	\param[in] top contains a pointer to the chunk that should be to the top.
	*/
	__declspec(dllexport) void  setTop(Chunk *	top);
	
	/*!
	*	\brief This method sets a chunk as the chunk to the top right.
	*	\param[in] righttop contains a pointer to the chunk that should be to the top right.
	*/
	__declspec(dllexport) void  setRightTop(Chunk * righttop);

	/*!
	*	\brief This method sets a chunk as the chunk to the left.
	*	\param[in] left contains a pointer to the chunk that should be to the left.
	*/
	__declspec(dllexport) void  setLeft(Chunk * left);

	/*!
	*	\brief This method sets a chunk as the chunk to the right.
	*	\param[in] right contains a pointer to the chunk that should be to the right.
	*/
	__declspec(dllexport) void  setRight(Chunk * right);

	/*!
	*	\brief This method sets a chunk as the chunk to the bottom left.
	*	\param[in] leftbottom contains a pointer to the chunk that should be to the bottom left.
	*/
	__declspec(dllexport) void  setLeftBottom(Chunk * leftbottom);

	/*!
	*	\brief This method sets a chunk as the chunk to the bottom.
	*	\param[in] bottom contains a pointer to the chunk that should be to the bottom.
	*/
	__declspec(dllexport) void  setBottom(Chunk * bottom);

	/*!
	*	\brief This method sets a chunk as the chunk to the bottom right.
	*	\param[in] rightbottom contains a pointer to the chunk that should be to the bottom right.
	*/
	__declspec(dllexport) void  setRightBottom(Chunk * rightbottom);

	/*!
	*	\brief This method returns the chunk to the top.
	*	\return A pointer of the chunk to the top.
	*/
	__declspec(dllexport) Chunk *  getTop();

	/*!
	*	\brief This method returns the chunk to the left.
	*	\return A pointer of the chunk to the left.
	*/
	__declspec(dllexport) Chunk *  getLeft();

	/*!
	*	\brief This method returns the chunk to the right.
	*	\return A pointer of the chunk to the right.
	*/
	__declspec(dllexport) Chunk *  getRight();

	/*!
	*	\brief This method returns the chunk to the bottom.
	*	\return A pointer of the chunk to the bottom.
	*/
	__declspec(dllexport) Chunk *  getBottom();

	/*!
	*	\brief This method returns the chunk coordinates.
	*	\return A 2d integer vector.
	*/
	__declspec(dllexport) sf::Vector2i  getCoords(){ return ChunkCoord; }

	/*!
	*	\brief This method calculates the vision of a single component.
	*	\param[in] updateobject Contains all data required for the update event.
	*	\param[out] comp Contains the game component who is sensing for other components. 
	*/
	__declspec(dllexport) void  SenseSingle(const UpdateData & updateobject, GameComponent * comp);
	
	/*!
	*	\brief This method calculates the collision of a single component.
	*	\param[in] updateobject Contains all data required for the update event.
	*	\param[out] comp Contains the game component who is colliding with other components.
	*/
	__declspec(dllexport) void  CollideSingle(const UpdateData & updateobject, GameComponent * comp);

	/*!
	*	\brief This method returns the real position of the chunk.
	*	\return A 2D float vector containing the position of the chunk.
	*/
	__declspec(dllexport) sf::Vector2f getPurePosition(){ return PurePosition; }

	/*!
	*	\brief This method returns the size of the chunk.
	*	\return A float containing the size of the chunk.
	*/
	__declspec(dllexport) float getSize(){ return size; }
private:
	//!	\brief Contains the real position of the chunk.
	sf::Vector2f PurePosition;
	//! \brief contains a pointer to the topleft chunk.
	Chunk * LeftTop;
	//! \brief contains a pointer to the top chunk.
	Chunk * Top;
	//! \brief contains a pointer to the topright chunk.
	Chunk * RightTop;
	//! \brief contains a pointer to the left chunk.
	Chunk * Left;
	//! \brief contains a pointer to the right chunk.
	Chunk * Right;
	//! \brief contains a pointer to the bottomleft chunk.
	Chunk * LeftBottom;
	//! \brief contains a pointer to the bottom chunk.
	Chunk * Bottom;
	//! \brief contains a pointer to the bottomright chunk.
	Chunk * RightBottom;
	//! \brief contains a list of components contained in the chunk.
	std::list<GameComponent*> Components;
	//! \brief contains the size of the chunk.
	float size;
	//! \brief contains the coordinates of the chunk
	sf::Vector2i ChunkCoord;
	//! \brief contains a list of components to remove from the chunk.
	std::list<GameComponent*> RemoveFromChunk;

	/*!
	*	\brief This method calls Chunk::CollideSingle for every component in the chunk.
	*	\param[in] updateobject contains all data for the update event.
	*/
	__declspec(dllexport) void Collide(const UpdateData & updateobject);

	/*!
	*	\brief This method calls Chunk::SenseSingle for every component in the chunk.
	*	\param[in] updateobject contains all data for the update event.
	*/
	__declspec(dllexport) void Sense(const UpdateData & updateobject);

	/*!
	*	\brief This method checks if a component still resides inside the chunk if not it will push it to the next chunk.
	*	if no next chunk exsists it will pull the component back into its region.
	*	\param[in] c Contains the component to check.
	*/
	__declspec(dllexport) void MoveComponentToNextChunk(GameComponent * c);

	/*!
	*	\brief a function to simplify the ifstatements in Chunk::MoveComponentToNextChunk
	*	\param[in] axis Contains the axis to check on.
	*	\param[in] offset Contains the offset to check on.
	*	\return Returns true if the axis is in bounds.
	*/
	__declspec(dllexport) bool AxisisInBounds(float axis, float offset);


	/*!
	*	\brief removes all the "Dead" components from the chunk but does not delete them.
	*/
	__declspec(dllexport) void RemoveFlaggedFromChunk();
};
