#include "ScreenManager.hpp"

ScreenManager & ScreenManager::getInstance()
{
	GameFactory * f = &GameFactory::getInstance();
	static ScreenManager manager;
	manager.addScreen("MainScreen", f->ProduceScreen("MainScreen"));
	manager.setActiveScreen("MainScreen");
	return manager;
}

ScreenManager::ScreenManager()
{
	ActiveScreen = nullptr;
	Window = &WindowManager::getInstance();
	Window->InitWindow(sf::VideoMode(800, 800), "AI Simulation");
	AudioManager::getInstance().PlayMusic("Music_01");
}

ScreenManager::~ScreenManager()
{
}


void ScreenManager::Update(UpdateData * updateobject)
{
	Keyboard::getInstance().update();
	Mouse::getInstance().Update();
	if (ActiveScreen != nullptr)
	{
		ActiveScreen->Update(updateobject);
	}
	GameFactory::getInstance().DeleteDecommisioned();
}

void ScreenManager::Draw()
{
	if (ActiveScreen != nullptr)
	{
		ActiveScreen->Draw(*Window->getWindow(), sf::Vector2f{0.f,0.f});
	}
}


void ScreenManager::addScreen(std::string name, GameScreen * screen)
{
	Screens[name] = screen;
}


void ScreenManager::setActiveScreen(std::string name)
{
	ActiveScreen = Screens.find(name)->second;
}


void ScreenManager::run()
{
	while (Window->getWindow()->isOpen())
	{
		sf::Event event;
		while (Window->getWindow()->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				Window->getWindow()->close();
		}
		UpdateData * data = new UpdateData();
		Update(data);
		Window->getWindow()->clear();
		Draw();
		Window->getWindow()->display();
		delete data;
	}
}