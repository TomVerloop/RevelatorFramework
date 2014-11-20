
#include "SFX.hpp"


SFX::SFX()
{
	Buffer = nullptr;
}


SFX::~SFX()
{
	if (Buffer != nullptr)
	{
		delete Buffer;
	}
}


bool 	SFX::loadFromFile(const std::string &filename)
{
	if (Buffer != nullptr)
	{
		delete Buffer;
	}
	Buffer = new sf::SoundBuffer();
	return Buffer->loadFromFile(filename);
	setBuffer(*Buffer);
}

bool 	SFX::loadFromMemory(const void *data, std::size_t sizeInBytes)
{
	if (Buffer != nullptr)
	{
		delete Buffer;
	}
	Buffer = new sf::SoundBuffer();
	return Buffer->loadFromMemory(data, sizeInBytes);
	setBuffer(*Buffer);
}

bool 	SFX::loadFromStream(sf::InputStream &stream)
{
	if (Buffer != nullptr)
	{
		delete Buffer;
	}
	Buffer = new sf::SoundBuffer();
	return Buffer->loadFromStream(stream);
	setBuffer(*Buffer);
}

bool 	SFX::loadFromSamples(const sf::Int16 *samples, std::size_t sampleCount, unsigned int channelCount, unsigned int sampleRate)
{
	if (Buffer != nullptr)
	{
		delete Buffer;
	}
	Buffer = new sf::SoundBuffer();
	return Buffer->loadFromSamples(samples, sampleCount, channelCount, sampleRate);
	setBuffer(*Buffer);
}
