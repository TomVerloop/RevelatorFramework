#include "GameFactory.hpp"

std::ifstream & operator>>(std::ifstream & input, sf::Vector2f & rhs)
{
	char c;
	if (!(input >> rhs.x)){ throw std::exception("wrong value for X "); }

	if (!(input >> c)){ throw std::exception("Where is the comma"); }

	if (!(input >> rhs.y)){ throw std::exception("wrong value for Y"); };
	return input;
}

GameFactory::GameFactory()
{
}


GameFactory::~GameFactory()
{
}


GameFactory * GameFactory::getInstance()
{
	static GameFactory * f = new GameFactory();
	return f;
}

GameScreen * GameFactory::ProduceScreen(std::string screenname)
{
	GameScreen * screen = new GameScreen();
	Screens.push_back(screen);
	std::ifstream input("Resourses\\GameScreens\\" + screenname + ".txt");
	std::string AddType = "";
	while (!input.eof())
	{
		input >> AddType;
		if (AddType == "LAYER")
		{
			std::string Layername = "";
			input >> Layername;
			Layer * l = ProduceLayer(Layername);
			screen->addLayer(Layername, l);
		}
	}
	return screen;
}

Layer * GameFactory::ProduceLayer(std::string layername)
{
	Layer * layer = new Layer();
	Layers.push_back(layer);
	std::ifstream input("Resourses\\Layers\\" + layername + ".txt");
	std::string AddType = "";
	Chunk * lastaddedchunk = nullptr;
	while (!input.eof())
	{
		input >> AddType;
		if (AddType == "Chunk")
		{

			std::string Chunkname = "";
			std::string activechunk = "";
			input >> Chunkname;
			input >> activechunk;
			Chunk * c = ProduceChunk(Chunkname);
			if (lastaddedchunk != nullptr)
			{
				sf::Vector2i temp = lastaddedchunk->getCoords() + c->getCoords();
				if (temp == sf::Vector2i{ 1, 0 })
				{
					lastaddedchunk->setRight(c);
					c->setLeft(lastaddedchunk);
				}
				else if (temp == sf::Vector2i{ 1, 1 })
				{
					lastaddedchunk->setRightBottom(c);
					c->setLeftTop(lastaddedchunk);
				}
				else if (temp == sf::Vector2i{ 0, 1 })
				{
					lastaddedchunk->setBottom(c);
					c->setTop(lastaddedchunk);
				}
				else if (temp == sf::Vector2i{ -1, 1 })
				{
					lastaddedchunk->setLeftBottom(c);
					c->setRightTop(lastaddedchunk);
				}
				else if (temp == sf::Vector2i{ -1, 0 })
				{
					lastaddedchunk->setLeft(c);
					c->setRight(lastaddedchunk);
				}
				else if (temp == sf::Vector2i{ -1, -1 })
				{
					lastaddedchunk->setLeftTop(c);
					c->setRightBottom(lastaddedchunk);
				}
				else if (temp == sf::Vector2i{ 0, -1 })
				{
					lastaddedchunk->setTop(c);
					c->setBottom(lastaddedchunk);
				}
				else if (temp == sf::Vector2i{ 1, -1 })
				{
					lastaddedchunk->setRightTop(c);
					c->setLeftBottom(lastaddedchunk);
				}
				else
				{
					throw std::exception("Chunk Does not Link check chunk hiarchy");
				}

			}
			ChunkManager * cm = layer->getChunkManager();
			if (activechunk == "true")
			{
				cm->setActiveChunk(c);
			}if (lastaddedchunk == nullptr)
			{
				cm->setFirstChunk(c);
			}
			lastaddedchunk = c;

		}
		else if (AddType == "Enabled")
		{
			std::string value = "";
			input >> value;
			layer->setEnabled(value == "true");
		}
		else if (AddType == "WillUpdate")
		{
			std::string value = "";
			input >> value;
			layer->setUpdating(value == "true");
		}
		else if (AddType == "WillDraw")
		{
			std::string value = "";
			input >> value;
			layer->setUpdating(value == "true");
		}
	}
	return layer;
}

Chunk * GameFactory::ProduceChunk(std::string chunkname)
{
	Chunk * c = nullptr;
	std::ifstream input("Resourses\\Chunks\\" + chunkname + ".txt");
	std::string AddType = "";
	int coordx = 0;
	int coordy = 0;
	int size = 0;
	while (!input.eof())
	{
		input >> AddType;
		if (AddType == "COORDX")
		{
			input >> coordx;
		}
		else if (AddType == "COORDY")
		{
			input >> coordy;
		}
		else if (AddType == "SIZE")
		{
			input >> size;
			c = new Chunk(sf::Vector2i{ coordx, coordy }, static_cast<float>(size));
			Chunks.push_back(c);
		}
		else if (AddType == "ExampleComponent")
		{
			if (c == nullptr)
			{
				throw std::exception("order of chunk file wrong. first coords then size then components");
			}
			sf::Vector2f v;
			input >> v;
			ExampleComponent * e = new ExampleComponent(v);
			Components.push_back(e);
			c->addComponent(e);
		}
		else if (AddType == "MovableComponent")
		{
			if (c == nullptr)
			{
				throw std::exception("order of chunk file wrong. first coords then size then components");
			}
			sf::Vector2f v;
			input >> v;
			MovableComponent * m = new MovableComponent(v);
			Components.push_back(m);
			c->addComponent(m);
		}
	}
	return c;
}
