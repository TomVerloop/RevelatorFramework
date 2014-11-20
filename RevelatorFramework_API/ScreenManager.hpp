#pragma once

#include <map>
#include "GameScreen.hpp"
#include "GameFactory.hpp"
#include "windowManager.hpp"
#include "Keyboard.hpp"
#include "Mouse.hpp"
#include "AudioManager.hpp"
#include "EntryObject.hpp"

class GameScreen;



class ScreenManager
{
public:
	__declspec(dllexport) ~ScreenManager();
	__declspec(dllexport) static ScreenManager & getInstance();
	__declspec(dllexport) virtual void Update(const UpdateData & updateobject);
	__declspec(dllexport) virtual void Draw();
	__declspec(dllexport) void addScreen(std::string name, GameScreen * screen);
	__declspec(dllexport) void removeScreen(std::string name);
	__declspec(dllexport) GameScreen * getScreen(std::string name);
	__declspec(dllexport) void setActiveScreen(std::string name, EntryObject object);
	__declspec(dllexport) void run();
	__declspec(dllexport) ScreenManager(const ScreenManager &screenmanager) = delete;
	__declspec(dllexport) ScreenManager& operator=(const ScreenManager &screenmanager) = delete;
private:
	__declspec(dllexport) ScreenManager();
	__declspec(dllexport) void DrawThread();
	std::map<std::string, GameScreen *> Screens;
	GameScreen * ActiveScreen;
	WindowManager * Window;

};