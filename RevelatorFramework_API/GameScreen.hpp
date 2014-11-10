#ifndef _GAME_SCREEN
#define _GAME_SCREEN

#include "GameComponent.hpp"
#include "Drawable.hpp"
#include "Layer.hpp"
#include <map>
#include <SFML\Graphics.hpp>


class GameScreen :
 public Drawable
{
public:

	__declspec(dllexport) GameScreen();
	__declspec(dllexport) ~GameScreen();
	__declspec(dllexport) void Update(UpdateData * updateobject);
	__declspec(dllexport) void Draw(sf::RenderWindow & window, sf::Vector2f offset);
	__declspec(dllexport) void addLayer(std::string name, Layer * layer);
	__declspec(dllexport) void removeLayer(std::string name);
	__declspec(dllexport) Layer * getLayer(std::string name);
	__declspec(dllexport) void setTransaction(ScreenTransaction * transaction){ this->transaction = transaction; }
	__declspec(dllexport) bool hasTransaction() { return (transaction != nullptr); }
	__declspec(dllexport) ScreenTransaction * getTransaction(){ return transaction; }
private:
	std::map<std::string, Layer*> Layers;
	ScreenTransaction * transaction{ nullptr };

};
#endif //! _GAME_SCREEN

