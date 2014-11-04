#pragma once
#include "Chunk.hpp"
#include "GameComponent.hpp"
#include "Drawable.hpp"
class ChunkManager
{
public:
	ChunkManager();
	~ChunkManager();
	void Update(UpdateData * updateobject);
	void Draw(sf::RenderWindow & window, sf::Vector2f offset);
	void setActiveChunk(Chunk * c); 
	void setFirstChunk(Chunk * c);

private:
	Chunk * ActiveChunk;
	Chunk * FirstChunk;
};

