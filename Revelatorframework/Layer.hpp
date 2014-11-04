#ifndef _LAYER
#define _LAYER

#include <SFML\Graphics.hpp>
#include "GameComponent.hpp"
#include "Drawable.hpp"
#include "ChunkManager.hpp"
#include <list>

class Layer
{
public:
	Layer();
	~Layer();
	virtual void Update(UpdateData * updateobject);
	virtual void Draw(sf::RenderWindow & window, sf::Vector2f offset);
	bool hasTransaction();
	ScreenTransaction * getTransaction();

	//getters
	bool isEnabled() { return enabled; }
	bool isDrawing() { return willDraw; }
	bool isUpdating() { return willUpdate; }
	//setters
	void setEnabled(bool b) { enabled = b; }
	void setDrawing(bool b) { willDraw = b; }
	void setUpdating(bool b) { willUpdate = b; }

	ChunkManager * getChunkManager(){ return Chunks; }

private:

protected:
	bool enabled;
	bool willDraw;
	bool willUpdate;
	ChunkManager * Chunks;
	ScreenTransaction * transaction;
};

#endif //! _LAYER