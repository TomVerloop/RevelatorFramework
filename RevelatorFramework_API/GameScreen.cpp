#include "GameScreen.hpp"

GameScreen::GameScreen()
{

}


GameScreen::~GameScreen()
{

}


void GameScreen::addLayer(std::string name, Layer * layer)
{
	Layers[name] = layer;
}

void GameScreen::removeLayer(std::string name)
{
	Layers.erase(name);
}

Layer * GameScreen::getLayer(std::string name)
{
	return Layers[name];
}

void GameScreen::Update(const UpdateData & updateobject)
{
	if (!Layers.empty())
	{
		for (const auto & comp : Layers)
		{
			if (
				comp.second->isEnabled())
			{
				comp.second->Update(updateobject);
			}
		}
	}
}

void GameScreen::Draw(sf::RenderWindow & window, sf::Vector2f offset)
{
	if (!Layers.empty())
	{
		for (const auto & layer : Layers)
		{
			if (
				layer.second->isEnabled())
			{
				layer.second->Draw(window, offset);
			}
		}
	}
}
