#include "GameFactory.hpp"
#include <iostream>

std::ifstream & operator>>(std::ifstream & input, sf::Vector2f & rhs)
{
	char c;
	if (!(input >> rhs.x)){ throw std::exception("wrong value for X "); }

	if (!(input >> c)){ throw std::exception("Where is the comma"); }

	if (!(input >> rhs.y)){ throw std::exception("wrong value for Y"); };
	return input;
}

std::ifstream & operator>>(std::ifstream & input, ProducerPackage & rhs)
{
	char c;
	std::string Type;
	std::string Name;
	while (1)
	{
		if (!(input >> Type)){ throw std::exception("Type data not found "); }
		if (Type != "END")
		{
			if (!(input >> c))
			{
				throw std::exception("Where is the comma");
			}
			if (!(input >> Name))
			{
				throw std::exception("Name data not found");
			};
			if (!(input >> c))
			{
				throw std::exception("Where is the comma");
			}

			if (Type == "float")
			{
				float f;
				input >> f;
				rhs.PutValue(Name, f);
			}
			else if (Type == "int")
			{
				int i;
				input >> i;
				rhs.PutValue(Name, i);
			}
			else if (Type == "string")
			{
				std::string s;
				input >> s;
				rhs.PutValue(Name, s);
			}
			else if (Type == "bool")
			{
				bool b;
				input >> b;
				rhs.PutValue(Name, b);
			}
			else if (Type == "double")
			{
				double d;
				input >> d;
				rhs.PutValue(Name, d);
			}
			else if (Type == "long")
			{
				long l;
				input >> l;
				rhs.PutValue(Name, l);
			}

		}
		else
		{
			break;
		}
	}
	return input;
}

GameFactory::GameFactory()
{

}


GameFactory::~GameFactory()
{

}


void GameFactory::RegisterProducer(std::string Name, GameObjectProducer * producer)
{
	Producers[Name] = producer;
}

GameComponent * GameFactory::ProduceGameObject(std::string Name)
{
	if (Producers.find(Name) != Producers.end())
	{
		GameComponent * temp = Producers[Name]->Produce();
		Components.push_back(temp);
		return temp;
	}
	else
	{
		return nullptr;
	}
}

GameComponent * GameFactory::ProduceGameObject(std::string Name, ProducerPackage package)
{
	if (Producers.find(Name) != Producers.end())
	{
		GameComponent * temp = Producers[Name]->Produce(package);
		Components.push_back(temp);
		return temp;
	}
	else
	{
		return nullptr;
	}
}

void GameFactory::DeleteDecommisioned()
{
	std::list<GameComponent *> DeadComponents;
	for (auto & comp : Components)
	{
		if (comp->isDead())
		{
			DeadComponents.push_back(comp);
		}
	}
	while (DeadComponents.size() > 0)
	{
		auto & comp = DeadComponents.front();
		DeadComponents.pop_front();
		Components.remove(comp);
		delete comp;
	}
}

GameFactory & GameFactory::getInstance()
{
	static GameFactory factory;
	return factory;
}

GameScreen * GameFactory::ProduceScreen(std::string screenname)
{
	GameScreen * screen = new GameScreen();
	Screens.push_back(screen);
	std::ifstream input("Resourses\\GameScreens\\" + screenname + ".txt");
	std::string AddType;
	while (!input.eof())
	{
		AddType = "";
		input >> AddType;
		if (AddType == "LAYER")
		{
			std::string Layername = "";
			int ChunkSize = 0;
			int Chunks = 0;
			bool enabled = true;
			bool willupdate = true;
			bool willdraw = true;
			
			input >> Layername;
			input >> ChunkSize;
			input >> Chunks;
			input >> enabled;
			input >> willupdate;
			input >> willdraw;

			Layer * l = ProduceLayer(Layername,ChunkSize,Chunks,enabled,willupdate,willdraw);
			screen->addLayer(Layername, l);
			if (AddType == "END")
			{
				break;
			}
		}
	}
	return screen;
}

Layer * GameFactory::ProduceLayer(std::string layername, int ChunkSize, int Chunks,bool enabled,bool willupdate,bool willdraw)
{
	Layer * layer = new Layer();
	layer->setEnabled(enabled);
	layer->setUpdating(willupdate);
	layer->setDrawing(willdraw);
	Layers.push_back(layer);
	std::ifstream input("Resourses\\Layers\\" + layername + ".txt");
	std::vector<std::vector<Chunk *>> ChunkVector(Chunks, std::vector<Chunk *>(Chunks));
	ChunkVector.resize(Chunks);

	for (int i = 0; i < Chunks; i++)
	{
		for (int j = 0; j < Chunks; j++)
		{
			ChunkVector.at(i).at(j) = new Chunk(sf::Vector2i{ i, j }, static_cast<float>(ChunkSize));
			if (i > 0)
			{
				ChunkVector.at(i).at(j)->setLeft(ChunkVector.at(i - 1).at(j));
				ChunkVector.at(i - 1).at(j)->setRight(ChunkVector.at(i).at(j));
			}
			if (j > 0)
			{
				ChunkVector.at(i).at(j)->setTop(ChunkVector.at(i).at(j - 1));
				ChunkVector.at(i).at(j - 1)->setBottom(ChunkVector.at(i).at(j));
			}
			if (i > 0 && j > 0)
			{
				ChunkVector.at(i).at(j)->setLeftTop(ChunkVector.at(i - 1).at(j - 1));
				ChunkVector.at(i - 1).at(j - 1)->setRightBottom(ChunkVector.at(i).at(j));
			}
			if (i == 0 && j == 0)
			{
				layer->getChunkManager()->setFirstChunk(ChunkVector.at(i).at(j));
			}
		}
	}
	while (!input.eof())
	{
		std::string AddType = "";
		input >> AddType;
		if (AddType != "" && Producers.find(AddType) != Producers.end())
		{
			ProducerPackage package;
			input >> package;
			layer->getChunkManager()->addGameComponent(ProduceGameObject(AddType,package));
		}
	}
	return layer;
}
