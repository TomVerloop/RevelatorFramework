#pragma once

#include "GameComponent.hpp"
#include "Drawable.hpp"
#include "Collidable.hpp"
#include <list>

enum __declspec(dllexport) Position
{
	topleft, top, topright, center, left, right, bottomleft, bottom, bottomright
};

class Chunk : public Drawable
{
public:
	__declspec(dllexport)  Chunk(sf::Vector2i ChunkCoord, float size = 0.f);
	__declspec(dllexport)  ~Chunk();
	__declspec(dllexport) void  addComponent(GameComponent * component);
	__declspec(dllexport) void  Update(UpdateData * updateobject);
	__declspec(dllexport) void  Draw(sf::RenderWindow & window, sf::Vector2f offset) override;
	__declspec(dllexport) void  DrawSelf(sf::RenderWindow & window, sf::Vector2f offset, Position pos);
	__declspec(dllexport) void  setLeftTop(Chunk *	leftrop);
	__declspec(dllexport) void  setTop(Chunk *	top);
	__declspec(dllexport) void  setRightTop(Chunk * righttop);
	__declspec(dllexport) void  setLeft(Chunk * left);
	__declspec(dllexport) void  setRight(Chunk * right);
	__declspec(dllexport) void  setLeftBottom(Chunk * leftbottom);
	__declspec(dllexport) void  setBottom(Chunk * bottom);
	__declspec(dllexport) void  setRightBottom(Chunk * rightbottom);
	__declspec(dllexport) Chunk *  getTop();
	__declspec(dllexport) Chunk *  getLeft();
	__declspec(dllexport) Chunk *  getRight();
	__declspec(dllexport) Chunk *  getBottom();
	__declspec(dllexport) sf::Vector2i  getCoords(){ return ChunkCoord; }
	__declspec(dllexport) void  SenseSingle(UpdateData * updateobject, GameComponent * comp);
	__declspec(dllexport) void  CollideSingle(UpdateData * updateobject, GameComponent * comp);
	__declspec(dllexport) sf::Vector2f getPurePosition(){ return PurePosition; }
	__declspec(dllexport) float getSize(){ return size; }
private:

	sf::Vector2f PurePosition;
	Chunk * LeftTop;
	Chunk * Top;
	Chunk * RightTop;
	Chunk * Left;
	Chunk * Right;
	Chunk * LeftBottom;
	Chunk * Bottom;
	Chunk * RightBottom;
	std::list<GameComponent*> Components;
	float size;
	sf::Vector2i ChunkCoord;
	std::list<GameComponent*> RemoveFromChunk;

	__declspec(dllexport) void Collide(UpdateData * updateobject);
	__declspec(dllexport) void Sense(UpdateData * updateobject);
	__declspec(dllexport) void MoveComponentToNextChunk(GameComponent * c);
	__declspec(dllexport) bool AxisisInBounds(float axis, float offset);
	__declspec(dllexport) void RemoveFlaggedFromChunk();
	__declspec(dllexport) void RemoveDeadObjects();
};
