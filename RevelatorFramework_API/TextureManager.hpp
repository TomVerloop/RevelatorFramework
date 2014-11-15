#pragma once
#include <SFML\Graphics.hpp>
#include <fstream>
class TextureManager
{
public:
	__declspec(dllexport) ~TextureManager();
	__declspec(dllexport) static TextureManager & getInstance();
	__declspec(dllexport) TextureManager(const TextureManager &texturemanager) = delete;
	__declspec(dllexport) TextureManager& operator=(const TextureManager &texturemanager) = delete;
	__declspec(dllexport) sf::Texture & getTexture(std::string name);

private:
	__declspec(dllexport) TextureManager();
	std::map<std::string, sf::Texture *> Textures;
};

