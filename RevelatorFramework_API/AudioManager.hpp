#pragma once
#include <map>
#include <SFML\Audio.hpp>
#include "SFX.hpp"
#include <fstream>
class AudioManager
{
public:

	__declspec(dllexport) static AudioManager & getInstance();
	__declspec(dllexport) AudioManager(const AudioManager &audiomanager) = delete;
	__declspec(dllexport) AudioManager& operator=(const AudioManager &audiomanager) = delete;
	__declspec(dllexport) ~AudioManager();
	__declspec(dllexport) bool PlaySFX(std::string name);
	__declspec(dllexport) bool PlayMusic(std::string name);
	__declspec(dllexport) bool StopMusic();
	__declspec(dllexport) bool musicIsPlaying(){ return getInstance().PlayingMusic != nullptr; }
private:
	std::map<std::string, SFX*> SoundEffects;
	std::map<std::string, sf::Music*> Musics;
	sf::Music * PlayingMusic;
	__declspec(dllexport) AudioManager();
};

