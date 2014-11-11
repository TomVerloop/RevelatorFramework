#pragma once
#include <SFML\Graphics.hpp>
class Mouse
{
public:
	__declspec(dllexport) ~Mouse();
	__declspec(dllexport) static Mouse & getInstance();
	__declspec(dllexport) Mouse(const Mouse &mouse) = delete;
	__declspec(dllexport) Mouse& operator=(const Mouse &mouse) = delete;
	__declspec(dllexport) bool getLeft(){ return MouseLeft; }
	__declspec(dllexport) bool getRight(){ return MouseRight; }
	__declspec(dllexport) bool getMiddle(){ return MouseMiddle; }
	__declspec(dllexport) bool getXButton1(){ return MouseXButton1; }
	__declspec(dllexport) bool getXButton2(){ return MouseXButton2; }
	__declspec(dllexport) sf::Vector2f getMousePosition(){ return MousePosition; }
	__declspec(dllexport) void Update();
private:
	__declspec(dllexport) Mouse();
	bool MouseLeft;
	bool MouseRight;
	bool MouseMiddle;
	bool MouseXButton1;
	bool MouseXButton2;
	sf::Vector2f MousePosition;
};

