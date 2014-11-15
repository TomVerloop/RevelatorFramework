#include <SFML/Graphics.hpp>
#include <ScreenManager.hpp>
#include <GameFactory.hpp>
#include "ExampleComponentProducer.hpp"
#include "MovableComponentProducer.hpp"
#include "ExampleLayerProducer.hpp"
#include "ExampleScreenProducer.hpp"


int main(int argc, char* argv[])
{
	GameFactory::getInstance().RegisterObjectProducer("ExampleComponent", new ExampleComponentProducer());
	GameFactory::getInstance().RegisterObjectProducer("MovableComponent", new MovableComponentProducer());
	GameFactory::getInstance().RegisterLayerProducer("ExampleLayer",new ExampleLayerProducer());
	GameFactory::getInstance().RegisterScreenProducer("ExampleTestScreen", new ExampleScreenProducer());
	ScreenManager * screenmanager = &ScreenManager::getInstance();
	screenmanager->run();
	return 0;
}


