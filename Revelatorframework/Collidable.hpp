#ifndef _COLLIDABLE
#define _COLLIDABLE
#include <SFML\Graphics.hpp>
#include "Drawable.hpp"
#include "Rectangle.hpp"
class Collidable
{
public:
	Collidable();
	Collidable(sf::Vector2f * position, sf::Vector2f size);
	~Collidable();
	Rectangle & getCollider();
	bool isMoved();

private:

protected:
	bool hasMoved;
	sf::Vector2f * position;
	Rectangle Collider;
	sf::Vector2f lastpos;
};

#endif //! _COLLIDABLE