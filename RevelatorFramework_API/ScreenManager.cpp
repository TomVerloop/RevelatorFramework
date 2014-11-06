#include "ScreenManager.hpp"

ScreenManager * ScreenManager::getInstance()
{
	GameFactory * f = GameFactory::getInstance();
	static ScreenManager * manager = new ScreenManager();
	manager->addScreen("MainScreen", f->ProduceScreen("MainScreen"));
	manager->setActiveScreen("MainScreen");
	return manager;
}

ScreenManager::ScreenManager()
{
	ActiveScreen = nullptr;
}

ScreenManager::~ScreenManager()
{
}


void ScreenManager::Update(UpdateData * updateobject)
{
	if (ActiveScreen != nullptr)
	{
		ActiveScreen->Update(updateobject);
		if (ActiveScreen->hasTransaction())
		{
			std::string name = ActiveScreen->getTransaction()->getTo();
			setActiveScreen(name);
		}
	}
}

void ScreenManager::Draw(sf::RenderWindow & window, sf::Vector2f offset)
{
	if (ActiveScreen != nullptr)
	{
		ActiveScreen->Draw(window,offset);
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