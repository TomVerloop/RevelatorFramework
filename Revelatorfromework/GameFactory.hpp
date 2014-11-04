#pragma once
#include <string>
#include "GameScreen.hpp"
#include "Chunk.hpp"
#include "ChunkManager.hpp"
#include "Layer.hpp"
#include "ScreenManager.hpp"
#include <fstream>
#include "MovableComponent.hpp"
#include "ExampleComponent.hpp"

class GameFactory
{
public:
	~GameFactory();
	GameScreen * ProduceScreen(std::string screenname);
	static GameFactory * getInstance();
	
private:
	GameFactory();
	Layer * ProduceLayer(std::string layername);
	Chunk * ProduceChunk(std::string chunkname);
	std::list<Layer *> Layers;
	std::list<Chunk *> Chunks;
	std::list<GameScreen *> Screens;
	std::list<GameComponent * > Components;
};

