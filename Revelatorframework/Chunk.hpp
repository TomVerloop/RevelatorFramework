#pragma once
#include "GameComponent.hpp"
#include "Drawable.hpp"
#include "Collidable.hpp"
#include <list>

enum Position
{
	topleft, top, topright, center, left, right, bottomleft, bottom, bottomright
};

class Chunk : public Drawable
{
public:
	Chunk(sf::Vector2i ChunkCoord, float size = 0.f);
	~Chunk();
	void addComponent( GameComponent * component);
	void Update(UpdateData * updateobject);
	void Draw(sf::RenderWindow & window, sf::Vector2f offset) override;
	void DrawSelf(sf::RenderWindow & window, sf::Vector2f offset, Position pos);


	void setLeftTop(Chunk *	leftrop);
	void setTop(Chunk *	top);
	void setRightTop(Chunk * righttop);
	void setLeft(Chunk * left);
	void setRight(Chunk * right);
	void setLeftBottom(Chunk * leftbottom);
	void setBottom(Chunk * bottom);
	void setRightBottom(Chunk * rightbottom);

	Chunk * getTop();
	Chunk * getLeft();
	Chunk * getRight();
	Chunk * getBottom();

	sf::Vector2i getCoords(){ return ChunkCoord; }

	void SenseSingle(UpdateData * updateobject, GameComponent * comp);
	void CollideSingle(UpdateData * updateobject, GameComponent * comp);
protected:
	Chunk * LeftTop;
	Chunk * Top;
	Chunk * RightTop;
	Chunk * Left;
	Chunk * Right;
	Chunk * LeftBottom;
	Chunk * Bottom;
	Chunk * RightBottom;
	std::list<GameComponent*>	Components;
	float size;
	sf::Vector2i ChunkCoord;
	std::list<GameComponent*> RemoveFromChunk;
private:
	void Collide(UpdateData * updateobject);
	void Sense(UpdateData * updateobject);
	sf::Vector2f PurePosition;

	void MoveComponentToNextChunk(GameComponent * c);
	bool AxisisInBounds(float axis,float offset);
	void RemoveFlaggedFromChunk();
};
