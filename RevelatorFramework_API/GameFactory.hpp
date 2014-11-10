#pragma once
#include <string>
#include "GameScreen.hpp"
#include "Chunk.hpp"
#include "ChunkManager.hpp"
#include "Layer.hpp"
#include "ScreenManager.hpp"
#include "GameObjectProducer.hpp"
#include <fstream>

class GameFactory
{
public:
	__declspec(dllexport) ~GameFactory();
	__declspec(dllexport) GameScreen * ProduceScreen(std::string screenname);
	__declspec(dllexport) static GameFactory * getInstance();
	__declspec(dllexport) void RegisterProducer(std::string Name, GameObjectProducer * producer);
	__declspec(dllexport) GameComponent * ProduceGameObject(std::string Name);
	__declspec(dllexport) GameComponent * ProduceGameObject(std::string Name, ProducerPackage package);
	__declspec(dllexport) void DeleteDecommisioned(GameComponent * component);
private:
	__declspec(dllexport) GameFactory();
	__declspec(dllexport) Layer * ProduceLayer(std::string layername, int ChunkSize, const int Chunks, bool enabled, bool willupdate, bool willdraw);
	std::list<Layer *> Layers;
	std::list<Chunk *> Chunks;
	std::list<GameScreen *> Screens;
	std::list<GameComponent * > Components;
	std::map<std::string, GameObjectProducer *> Producers;
};

