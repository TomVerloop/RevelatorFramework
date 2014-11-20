#pragma once

#include <map>
#include <SFML\Graphics.hpp>

#include "GameComponent.hpp"
#include "Drawable.hpp"
#include "Layer.hpp"
#include "EntryObject.hpp"

class Layer;

/*!
* \file GameScreen.hpp
* \class GameScreen
* \brief This class is used to manager different screens a game can contain.
* \details This Class is used to manage different screens a game can contain.
*	it will send update and draw signals to all layers it is populated with.
* \author    Tom Verloop
* \version   1.0
* \date      2014-2015
*/

class GameScreen :
 public Drawable
{
public:

	/*!
	*	\brief the default constructor.
	*/
	__declspec(dllexport) GameScreen();

	/*!
	*	\brief the destructor.
	*/
	__declspec(dllexport) ~GameScreen();
	
	/*!
	*	\brief relais the update signal to all of its layers.
	*	\param[in] updateobject Contains the update information for the layers.
	*/
	__declspec(dllexport) void Update(const UpdateData & updateobject);

	/*!
	*	\brief relais the draw signal to all of its layers.
	*	\param[out] window Contains the sfml render window to draw upon.
	*	\param[in] offset contains the offset to draw upon.
	*/
	__declspec(dllexport) void Draw(sf::RenderWindow & window, sf::Vector2f offset);

	/*!
	*	\brief adds a layer to the gamescreen
	*	\param[in] name contains the name of the layer.
	*	\param[in] contains a pointer to the layer.
	*/
	__declspec(dllexport) void addLayer(std::string name, Layer * layer);

	/*!
	*	\brief removes a layer from the gamescreen
	*	\param[in] name contains the name of the layer.
	*/
	__declspec(dllexport) void removeLayer(std::string name);

	/*!
	*	\brief returns a layer from the gamescreen
	*	\param[in] name contains the name of the layer.
	*	\return contains a pointer to the layer
	*/
	__declspec(dllexport) Layer * getLayer(std::string name);

	/*!
	*	\brief a custom update handler function not used yet.
	*	\todo implement a use for this
	*/
	__declspec(dllexport) virtual void UpdateHandle(const UpdateData & updateobject) = 0;

	/*!
	*	\brief this function will be called at the moment a gamescreen becomes the active screen.
	*	\paramp[in] object Contains an EntryObject which is currently unused.
	*/
	__declspec(dllexport) virtual void Entry(EntryObject object) = 0;

private:

	//! \brief contains a map of layers.
	std::map<std::string, Layer*> Layers;

};