#ifndef _SCREEN_MANAGER
#define _SCREEN_MANAGER

#include <map>
#include "GameScreen.hpp"

class ScreenManager
{
public:
	ScreenManager();
	~ScreenManager();

	virtual void Update(UpdateData * updateobject);
	virtual void Draw(sf::RenderWindow & window, sf::Vector2f offset);
	void addScreen(std::string name,GameScreen * screen);
	void removeScreen(std::string name);
	GameScreen * getScreen(std::string name);
	void pushTransaction(ScreenTransaction * transaction);
	void setActiveScreen(std::string name);
private:
	std::map<std::string, GameScreen *> Screens;
	GameScreen * ActiveScreen;

};

#endif //! _SCREEN_MANAGER