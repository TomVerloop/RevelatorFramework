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

	GameScreen();
	~GameScreen();

	void Update(UpdateData * updateobject);
	void Draw(sf::RenderWindow & window, sf::Vector2f offset);
	void addLayer(std::string name, Layer * layer);
	void removeLayer(std::string name);
	Layer * getLayer(std::string name);

	void setTransaction(ScreenTransaction * transaction){ this->transaction = transaction; }
	bool hasTransaction() { return (transaction != nullptr); }
	ScreenTransaction * getTransaction(){ return transaction; }
protected:
	std::map<std::string, Layer*> Layers;
	ScreenTransaction * transaction{ nullptr };

};
#endif //! _GAME_SCREEN

