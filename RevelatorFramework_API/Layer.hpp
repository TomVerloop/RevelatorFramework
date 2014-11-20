#pragma once

#include <SFML\Graphics.hpp>
#include <list>

#include "GameComponent.hpp"
#include "Drawable.hpp"
#include "ChunkManager.hpp"

class ChunkManager;

/*!
* \file Layer.hpp
* \class Layer
* \brief This class is responsible for the different layers a gamescreen can be composed of.
* \details This Class is responsible for cutting up a gamescreen in layers. 
* this way you can keep components sepperated who are on different depth levels.
* \author    Tom Verloop
* \version   1.0
* \date      2014-2015
*/

class Layer
{
public:
	/*!
	*	\brief The default constructor.
	*/
	__declspec(dllexport) Layer();
	
	/*!
	*	\brief The destructor.
	*/
	__declspec(dllexport) ~Layer();

	/*!
	*	\brief This method relais the update signal to the ChunkManager.
	*	\param[in] updateobject Contains all data required for the update.
	*/
	__declspec(dllexport) virtual void Update(const UpdateData & updateobject);

	/*!
	*	\brief This method relais the draw signal to the ChunkManager.
	*	\param[out] window Contains the sfml renderwindow to draw upon.
	*	\param[in] offset contains the offset to draw upon.
	*/
	__declspec(dllexport) virtual void Draw(sf::RenderWindow & window, sf::Vector2f offset);

	/*!
	*	\brief This method returns true if the layer is enabled.
	*	\return returns true if enabled.
	*/
	__declspec(dllexport) bool isEnabled() { return enabled; }

	/*!
	*	\brief This method returns true if the layer should draw.
	*	\return returns true if this layer should draw.
	*/
	__declspec(dllexport) bool isDrawing() { return willDraw; }

	/*!
	*	\brief This method returns true if the layer should update.
	*	\return returns true if this layer should update.
	*/
	__declspec(dllexport) bool isUpdating() { return willUpdate; }
	
	/*!
	*	\brief This Method sets the layer enabled
	*	\param[in] b Contains the boolean value of the enablement.
	*/
	__declspec(dllexport) void setEnabled(bool b) { enabled = b; }

	/*!
	*	\brief This Method sets the layer to draw
	*	\param[in] b Contains the boolean value to draw.
	*/
	__declspec(dllexport) void setDrawing(bool b) { willDraw = b; }
	
	/*!
	*	\brief This Method sets the layer to update
	*	\param[in] b Contains the boolean value to update.
	*/
	__declspec(dllexport) void setUpdating(bool b) { willUpdate = b; }

	/*!
	*	\brief returns an pointer to the ChunkManager
	*	\return Returns a pointer to the ChunkManager.
	*/
	__declspec(dllexport) ChunkManager * getChunkManager(){ return Chunks; }
	
	/*!
	*	\brief a custom update which will be called by the regular update function.
	*	\param[in] updateobject Contains the data required for the update.
	*	\todo implement this shit.
	*/
	__declspec(dllexport) virtual void UpdateHandle(const UpdateData & updateobject) = 0;
private:

protected:
	//! \brief Contains the enable status.
	bool enabled;
	//! \brief Contains the draw status.
	bool willDraw;
	//! \brief Contains the update status.
	bool willUpdate;
	//! \brief Contains the ChunkManager.
	ChunkManager * Chunks;
};