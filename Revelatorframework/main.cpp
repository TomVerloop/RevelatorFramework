#include <SFML/Graphics.hpp>
#include "ScreenManager.hpp"
#include "GameFactory.hpp"

ScreenManager * InitializeScreen()
{
	GameFactory * f = GameFactory::getInstance();
	ScreenManager * manager = new ScreenManager();
	manager->addScreen("MainScreen", f->ProduceScreen("MainScreen"));
	manager->setActiveScreen("MainScreen");
	return manager;
}

int main(int argc, char* argv[])
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "AI Simulation");
	sf::CircleShape shape(100.f);
	ScreenManager * screenmanager = InitializeScreen();
	shape.setFillColor(sf::Color::Green);
	ScreenManager ScreenManager;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		UpdateData * data = new UpdateData(&window);
		screenmanager->Update(data);
		window.clear();
		screenmanager->Draw(window, sf::Vector2f{0.f,0.f});
		window.display();
		delete data;
	}

	return 0;
}


