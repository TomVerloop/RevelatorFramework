#include "stdafx.h"
#include "AudioManager.hpp"


AudioManager::AudioManager()
{
	std::ifstream sfxinput("Resourses\\audio\\sfx\\Content.txt");
	std::ifstream musicinput("Resourses\\audio\\music\\Content.txt");
	while (!sfxinput.eof())
	{
		std::string name;
		std::string filename;
		sfxinput >> name;
		sfxinput >> filename;
		SFX * f = new SFX();
		f->loadFromFile("Resourses\\audio\\sfx\\" + filename);
		SoundEffects[name] = f;
	}	while (!musicinput.eof())
	{
		std::string name;
		std::string filename;
		musicinput >> name;
		musicinput >> filename;
		sf::Music * f = new sf::Music();
		f->openFromFile("Resourses\\audio\\music\\" + filename);
		Musics[name] = f;
	}
}


AudioManager::~AudioManager()
{

}

bool AudioManager::PlaySFX(std::string name)
{
	
	if (SoundEffects.find(name) == SoundEffects.end())
	{
		return false;
	}
	SoundEffects[name]->play();
	return true;
}

bool AudioManager::PlayMusic(std::string name)
{
	if (Musics.find(name) == Musics.end())
	{
		return false;
	}
	StopMusic();
	PlayingMusic = Musics[name];
	PlayingMusic->play();
	return true;
}

bool AudioManager::StopMusic()
{
	if (PlayingMusic != nullptr)
	{
		PlayingMusic->stop();
		PlayingMusic = nullptr;
	}
	return true;
}

AudioManager & AudioManager::getInstance()
{
	static AudioManager manager;
	return manager;
}