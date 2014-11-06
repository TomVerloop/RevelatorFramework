#pragma once
#include <string>
#include "GameScreen.hpp"
#include "Chunk.hpp"
#include "ChunkManager.hpp"
#include "Layer.hpp"
#include "ScreenManager.hpp"
#include <fstream>

class GameFactory
{
public:
	__declspec(dllexport) ~GameFactory();
	__declspec(dllexport) GameScreen * ProduceScreen(std::string screenname);
	__declspec(dllexport) static GameFactory * getInstance();
	
private:
	__declspec(dllexport) GameFactory();
	__declspec(dllexport) Layer * ProduceLayer(std::string layername);
	__declspec(dllexport) Chunk * ProduceChunk(std::string chunkname);
	std::list<Layer *> Layers;
	std::list<Chunk *> Chunks;
	std::list<GameScreen *> Screens;
	std::list<GameComponent * > Components;
};

