#pragma once
#include "Chunk.hpp"
#include "GameComponent.hpp"
#include "Drawable.hpp"
class ChunkManager
{
public:
	__declspec(dllexport) ChunkManager();
	__declspec(dllexport) ~ChunkManager();
	__declspec(dllexport) void Update(UpdateData * updateobject);
	__declspec(dllexport) void Draw(sf::RenderWindow & window, sf::Vector2f offset);
	__declspec(dllexport) void setActiveChunk(Chunk * c);
	__declspec(dllexport) void setFirstChunk(Chunk * c);

private:
	Chunk * ActiveChunk;
	Chunk * FirstChunk;
};

