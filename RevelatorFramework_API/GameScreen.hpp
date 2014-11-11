#pragma once
#include "GameComponent.hpp"
#include "Drawable.hpp"
#include "Layer.hpp"
#include <map>
#include <SFML\Graphics.hpp>

class Layer;


class GameScreen :
 public Drawable
{
public:

	__declspec(dllexport) GameScreen();
	__declspec(dllexport) ~GameScreen();
	__declspec(dllexport) void Update(UpdateData * updateobject);
	__declspec(dllexport) void Draw(sf::RenderWindow & window, sf::Vector2f offset);
	__declspec(dllexport) void addLayer(std::string name, Layer * layer);
	__declspec(dllexport) void removeLayer(std::string name);
	__declspec(dllexport) Layer * getLayer(std::string name);
private:
	std::map<std::string, Layer*> Layers;

};