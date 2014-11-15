#include "stdafx.h"
#include "TextureManager.hpp"

std::ifstream & operator>>(std::ifstream & Input, sf::IntRect & Rhs)
{
	char C;
	if (!(Input >> Rhs.left)){ throw std::exception("wrong value for X "); }

	if (!(Input >> C)){ throw std::exception("Where is the comma"); }

	if (!(Input >> Rhs.top)){ throw std::exception("wrong value for Y"); };

	if (!(Input >> C)){ throw std::exception("Where is the comma"); }

	if (!(Input >> Rhs.width)){ throw std::exception("wrong value for width"); };

	if (!(Input >> C)){ throw std::exception("Where is the comma"); }

	if (!(Input >> Rhs.height)){ throw std::exception("wrong value for height"); };

	return Input;
}

TextureManager::TextureManager()
{
	std::ifstream input("Resourses\\Textures\\Content.txt");
	while (!input.eof())
	{
		std::string name;
		std::string filename;
		sf::IntRect TextureRectangle;
		input >> name;
		input >> filename;
		input >> TextureRectangle;
		sf::Texture * t = new sf::Texture();
		t->loadFromFile("Resourses\\Textures\\" + filename);
		Textures[name] = t;
	}

}

TextureManager::~TextureManager()
{
	for (auto & tex : Textures)
	{
		delete tex.second;
	}
}

sf::Texture & TextureManager::getTexture(std::string name)
{
	if (Textures.find(name) != Textures.end())
	{
		return *Textures[name];
	}
	return sf::Texture{};
}