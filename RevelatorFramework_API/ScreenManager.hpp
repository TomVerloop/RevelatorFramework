#ifndef _SCREEN_MANAGER
#define _SCREEN_MANAGER

#include <map>
#include "GameScreen.hpp"
#include "GameFactory.hpp"
class ScreenManager
{
public:
	__declspec(dllexport) ~ScreenManager();
	__declspec(dllexport) static ScreenManager * getInstance();
	__declspec(dllexport) virtual void Update(UpdateData * updateobject);
	__declspec(dllexport) virtual void Draw(sf::RenderWindow & window, sf::Vector2f offset);
	__declspec(dllexport) void addScreen(std::string name, GameScreen * screen);
	__declspec(dllexport) void removeScreen(std::string name);
	__declspec(dllexport) GameScreen * getScreen(std::string name);
	__declspec(dllexport) void pushTransaction(ScreenTransaction * transaction);
	__declspec(dllexport) void setActiveScreen(std::string name);
private:
	__declspec(dllexport) ScreenManager();
	std::map<std::string, GameScreen *> Screens;
	GameScreen * ActiveScreen;

};

#endif //! _SCREEN_MANAGER