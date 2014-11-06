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
	__declspec(dllexport) Layer();
	__declspec(dllexport) ~Layer();
	__declspec(dllexport) virtual void Update(UpdateData * updateobject);
	__declspec(dllexport) virtual void Draw(sf::RenderWindow & window, sf::Vector2f offset);
	__declspec(dllexport) bool hasTransaction();
	__declspec(dllexport) ScreenTransaction * getTransaction();

	//getters
	__declspec(dllexport) bool isEnabled() { return enabled; }
	__declspec(dllexport) bool isDrawing() { return willDraw; }
	__declspec(dllexport) bool isUpdating() { return willUpdate; }
	//setters
	__declspec(dllexport) void setEnabled(bool b) { enabled = b; }
	__declspec(dllexport) void setDrawing(bool b) { willDraw = b; }
	__declspec(dllexport) void setUpdating(bool b) { willUpdate = b; }

	__declspec(dllexport) ChunkManager * getChunkManager(){ return Chunks; }

private:

protected:
	bool enabled;
	bool willDraw;
	bool willUpdate;
	ChunkManager * Chunks;
	ScreenTransaction * transaction;
};

#endif //! _LAYER