#pragma once
#include <SFML\Audio.hpp>
#include <stdlib.h>
class SFX : public sf::Sound
{
public:
	__declspec(dllexport) SFX();
	__declspec(dllexport) SFX(std::string filename);
	__declspec(dllexport) ~SFX();
	__declspec(dllexport) bool 	loadFromFile(const std::string &filename);
	__declspec(dllexport) bool 	loadFromMemory(const void *data, std::size_t sizeInBytes);
	__declspec(dllexport) bool 	loadFromStream(sf::InputStream &stream);
	__declspec(dllexport) bool 	loadFromSamples(const sf::Int16 *samples, std::size_t sampleCount, unsigned int channelCount, unsigned int sampleRate);
private:
	sf::SoundBuffer * Buffer;
};

