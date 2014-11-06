#ifndef _COLLIDABLE
#define _COLLIDABLE
#include <SFML\Graphics.hpp>
#include "Drawable.hpp"
#include "Rectangle.hpp"
class Collidable
{
public:
	__declspec(dllexport) Collidable();
	__declspec(dllexport) Collidable(sf::Vector2f * position, sf::Vector2f size);
	__declspec(dllexport) ~Collidable();
	__declspec(dllexport) Rectangle & getCollider();
	__declspec(dllexport) bool isMoved();

private:

protected:
	bool hasMoved;
	sf::Vector2f * position;
	Rectangle Collider;
	sf::Vector2f lastpos;
};

#endif //! _COLLIDABLE