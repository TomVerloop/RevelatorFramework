#include <SFML/Graphics.hpp>
#include <ScreenManager.hpp>
#include <GameFactory.hpp>
#include "ExampleComponentProducer.hpp"
#include "MovableComponentProducer.hpp"



int main(int argc, char* argv[])
{
	GameFactory::getInstance().RegisterProducer("ExampleComponent", new ExampleComponentProducer());
	GameFactory::getInstance().RegisterProducer("MovableComponent", new MovableComponentProducer());
	ScreenManager * screenmanager = &ScreenManager::getInstance();
	screenmanager->run();
	return 0;
}


