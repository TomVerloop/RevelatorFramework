#ifndef _COLLIDABLE
#define _COLLIDABLE
#include <SFML\Graphics.hpp>
#include "Drawable.hpp"


class Collidable
{
public:
	__declspec(dllexport) Collidable();
	__declspec(dllexport) Collidable(sf::Vector2f * position, sf::Vector2f size);
	__declspec(dllexport) ~Collidable();
	__declspec(dllexport) sf::Rect<float> getCollider();
	__declspec(dllexport) bool isMoved();

private:

protected:
	bool hasMoved;
	sf::Vector2f * position;
	sf::Rect<float> Collider;
	sf::Vector2f lastpos;
};

#endif //! _COLLIDABLE