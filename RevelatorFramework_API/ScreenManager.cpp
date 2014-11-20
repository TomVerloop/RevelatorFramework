
#include "ScreenManager.hpp"
#include "Utils.hpp"

ScreenManager & ScreenManager::getInstance()
{
	GameFactory * f = &GameFactory::getInstance();
	static ScreenManager manager;
	manager.addScreen("MainScreen", f->ProduceScreen("MainScreen"));
	manager.setActiveScreen("MainScreen", EntryObject{});
	return manager;
}

ScreenManager::ScreenManager()
{
	ActiveScreen = nullptr;
	Window = &WindowManager::getInstance();
	Window->InitWindow(sf::VideoMode(800, 800), "AI Simulation");
}

ScreenManager::~ScreenManager()
{
}


void ScreenManager::Update(const UpdateData & updateobject)
{
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

		ActiveScreen->Draw(*Window->getWindow(), sf::Vector2f{ 0.f, 0.f });
	}
}


void ScreenManager::addScreen(std::string name, GameScreen * screen)
{
	Screens[name] = screen;
}


void ScreenManager::setActiveScreen(std::string name,EntryObject object)
{
	ActiveScreen = Screens.find(name)->second;
	ActiveScreen->Entry(object);
}


void ScreenManager::run()
{
	sf::Clock clock;
	while (Window->getWindow()->isOpen())
	{
		sf::Event event;
		while (Window->getWindow()->pollEvent(event))
		{
			if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				Window->getWindow()->close();
		}
		UpdateData data;
		Update(data);
		Window->getWindow()->clear();
		Draw(); 

		Window->getWindow()->display();
	}
}