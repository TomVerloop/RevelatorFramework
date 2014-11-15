#pragma once

#include <map>
#include <SFML\Audio.hpp>
#include <fstream>

#include "SFX.hpp"

/*!
* \file AudioManager.hpp
* \class AudioManager
* \brief This Singleton Manages and plays all music and soundeffects
* \details This Class is Singleton defined. It holds an reference to all soundeffects and music. 
* It makes sure only one song is played at a time. sound effects however can be played multiple at a time.
* \author    Tom Verloop
* \version   1.0
* \date      2014-2015
* \warning   A Singleton
*/

class AudioManager
{
public:
	/*!
	*	\brief This static function returns a Singleton reference to the Audiomanager.
	*	\return A Refrence to the Audiomanager.
	*/
	__declspec(dllexport) static AudioManager & getInstance();

	//!	\brief Deleted copy constructor.
	__declspec(dllexport) AudioManager(const AudioManager &audiomanager) = delete;

	//!	\brief Deleted assignment opperator.
	__declspec(dllexport) AudioManager& operator=(const AudioManager &audiomanager) = delete;

	/*!
	*	\brief The Destructor
	*/
	__declspec(dllexport) ~AudioManager();

	/*!
	*	\brief This function plays a uninteruptable sound effect.
	*	\param[in] name contains the name of the sound effect.
	*	\return returns a true if the sound is available and false if not.
	*/
	__declspec(dllexport) bool PlaySFX(std::string name);

	/*!
	*	\brief This function plays a interuptable music. If another was playing then it will stop that one.
	*	\param[in] name contains the name of the music.
	*	\return returns a true if the sound is available and false if not.
	*/
	__declspec(dllexport) bool PlayMusic(std::string name);

	/*!
	*	\brief This function stops any playing music except sound effects.
	*	\return returns a true if the sound is available and false if not.
	*/
	__declspec(dllexport) bool StopMusic();

	/*!
	*	\brief This function checks if any music is playing at the moment.
	*	\return returns a true if the sound is available and false if not.
	*/
	__declspec(dllexport) bool musicIsPlaying(){ return getInstance().PlayingMusic != nullptr; }
private:

	//! \brief contains a key value map of strings and sound effects.
	std::map<std::string, SFX*> SoundEffects;
	//! \brief contains a key value map of strings and music.
	std::map<std::string, sf::Music*> Musics;
	//! \brief contains the music currently playing.
	sf::Music * PlayingMusic;

	/*!
	*	\brief The default constructor.
	*/
	__declspec(dllexport) AudioManager();
};

