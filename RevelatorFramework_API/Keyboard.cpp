
#include "Keyboard.hpp"


Keyboard::Keyboard()
{
	update();
}


Keyboard::~Keyboard()
{
}


Keyboard & Keyboard::getInstance()
{
	static Keyboard keyboard;
	return keyboard;
}


void Keyboard::update()
{
	A = sf::Keyboard::isKeyPressed(sf::Keyboard::A);
	B = sf::Keyboard::isKeyPressed(sf::Keyboard::B);
	C = sf::Keyboard::isKeyPressed(sf::Keyboard::C);
	D = sf::Keyboard::isKeyPressed(sf::Keyboard::D);
	E = sf::Keyboard::isKeyPressed(sf::Keyboard::E);
	F = sf::Keyboard::isKeyPressed(sf::Keyboard::F);
	G = sf::Keyboard::isKeyPressed(sf::Keyboard::G);
	H = sf::Keyboard::isKeyPressed(sf::Keyboard::H);
	I = sf::Keyboard::isKeyPressed(sf::Keyboard::I);
	J = sf::Keyboard::isKeyPressed(sf::Keyboard::J);
	K = sf::Keyboard::isKeyPressed(sf::Keyboard::K);
	L = sf::Keyboard::isKeyPressed(sf::Keyboard::L);
	M = sf::Keyboard::isKeyPressed(sf::Keyboard::M);
	N = sf::Keyboard::isKeyPressed(sf::Keyboard::N);
	O = sf::Keyboard::isKeyPressed(sf::Keyboard::O);
	P = sf::Keyboard::isKeyPressed(sf::Keyboard::P);
	Q = sf::Keyboard::isKeyPressed(sf::Keyboard::Q);
	R = sf::Keyboard::isKeyPressed(sf::Keyboard::R);
	S = sf::Keyboard::isKeyPressed(sf::Keyboard::S);
	T = sf::Keyboard::isKeyPressed(sf::Keyboard::T);
	U = sf::Keyboard::isKeyPressed(sf::Keyboard::U);
	V = sf::Keyboard::isKeyPressed(sf::Keyboard::V);
	W = sf::Keyboard::isKeyPressed(sf::Keyboard::W);
	X = sf::Keyboard::isKeyPressed(sf::Keyboard::X);
	Y = sf::Keyboard::isKeyPressed(sf::Keyboard::Y);
	Z = sf::Keyboard::isKeyPressed(sf::Keyboard::Z);
	Num0 = sf::Keyboard::isKeyPressed(sf::Keyboard::Num0);
	Num1 = sf::Keyboard::isKeyPressed(sf::Keyboard::Num1);
	Num2 = sf::Keyboard::isKeyPressed(sf::Keyboard::Num2);
	Num3 = sf::Keyboard::isKeyPressed(sf::Keyboard::Num3);
	Num4 = sf::Keyboard::isKeyPressed(sf::Keyboard::Num4);
	Num5 = sf::Keyboard::isKeyPressed(sf::Keyboard::Num5);
	Num6 = sf::Keyboard::isKeyPressed(sf::Keyboard::Num6);
	Num7 = sf::Keyboard::isKeyPressed(sf::Keyboard::Num7);
	Num8 = sf::Keyboard::isKeyPressed(sf::Keyboard::Num8);
	Num9 = sf::Keyboard::isKeyPressed(sf::Keyboard::Num9);
	Escape = sf::Keyboard::isKeyPressed(sf::Keyboard::Escape);
	LControl = sf::Keyboard::isKeyPressed(sf::Keyboard::LControl);
	LShift = sf::Keyboard::isKeyPressed(sf::Keyboard::LShift);
	LAlt = sf::Keyboard::isKeyPressed(sf::Keyboard::LAlt);
	LSystem = sf::Keyboard::isKeyPressed(sf::Keyboard::LSystem);
	RControl = sf::Keyboard::isKeyPressed(sf::Keyboard::RControl);
	RShift = sf::Keyboard::isKeyPressed(sf::Keyboard::RShift);
	RAlt = sf::Keyboard::isKeyPressed(sf::Keyboard::RAlt);
	RSystem = sf::Keyboard::isKeyPressed(sf::Keyboard::RSystem);
	Menu = sf::Keyboard::isKeyPressed(sf::Keyboard::Menu);
	LBracket = sf::Keyboard::isKeyPressed(sf::Keyboard::LBracket);
	RBracket = sf::Keyboard::isKeyPressed(sf::Keyboard::RBracket);
	SemiColon = sf::Keyboard::isKeyPressed(sf::Keyboard::SemiColon);
	Comma = sf::Keyboard::isKeyPressed(sf::Keyboard::Comma);
	Period = sf::Keyboard::isKeyPressed(sf::Keyboard::Period);
	Quote = sf::Keyboard::isKeyPressed(sf::Keyboard::Quote);
	Slash = sf::Keyboard::isKeyPressed(sf::Keyboard::Slash);
	BackSlash = sf::Keyboard::isKeyPressed(sf::Keyboard::BackSlash);
	Tilde = sf::Keyboard::isKeyPressed(sf::Keyboard::Tilde);
	Equal = sf::Keyboard::isKeyPressed(sf::Keyboard::Equal);
	Dash = sf::Keyboard::isKeyPressed(sf::Keyboard::Dash);
	Space = sf::Keyboard::isKeyPressed(sf::Keyboard::Space);
	Return = sf::Keyboard::isKeyPressed(sf::Keyboard::Return);
	BackSpace = sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace);
	Tab = sf::Keyboard::isKeyPressed(sf::Keyboard::Tab);
	PageUp = sf::Keyboard::isKeyPressed(sf::Keyboard::PageUp);
	PageDown = sf::Keyboard::isKeyPressed(sf::Keyboard::PageDown);
	End = sf::Keyboard::isKeyPressed(sf::Keyboard::End);
	Home = sf::Keyboard::isKeyPressed(sf::Keyboard::Home);
	Insert = sf::Keyboard::isKeyPressed(sf::Keyboard::Insert);
	Delete = sf::Keyboard::isKeyPressed(sf::Keyboard::Delete);
	Add = sf::Keyboard::isKeyPressed(sf::Keyboard::Add);
	Subtract = sf::Keyboard::isKeyPressed(sf::Keyboard::Subtract);
	Multiply = sf::Keyboard::isKeyPressed(sf::Keyboard::Multiply);
	Divide = sf::Keyboard::isKeyPressed(sf::Keyboard::Divide);
	Left = sf::Keyboard::isKeyPressed(sf::Keyboard::Left);
	Right = sf::Keyboard::isKeyPressed(sf::Keyboard::Right);
	Up = sf::Keyboard::isKeyPressed(sf::Keyboard::Up);
	Down = sf::Keyboard::isKeyPressed(sf::Keyboard::Down);
	Numpad0 = sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad0);
	Numpad1 = sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad1);
	Numpad2 = sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad2);
	Numpad3 = sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad3);
	Numpad4 = sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad4);
	Numpad5 = sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad5);
	Numpad6 = sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad6);
	Numpad7 = sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad7);
	Numpad8 = sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad8);
	Numpad9 = sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad9);
	F1 = sf::Keyboard::isKeyPressed(sf::Keyboard::F1);
	F2 = sf::Keyboard::isKeyPressed(sf::Keyboard::F2);
	F3 = sf::Keyboard::isKeyPressed(sf::Keyboard::F3);
	F4 = sf::Keyboard::isKeyPressed(sf::Keyboard::F4);
	F5 = sf::Keyboard::isKeyPressed(sf::Keyboard::F5);
	F6 = sf::Keyboard::isKeyPressed(sf::Keyboard::F6);
	F7 = sf::Keyboard::isKeyPressed(sf::Keyboard::F7);
	F8 = sf::Keyboard::isKeyPressed(sf::Keyboard::F8);
	F9 = sf::Keyboard::isKeyPressed(sf::Keyboard::F9);
	F10 = sf::Keyboard::isKeyPressed(sf::Keyboard::F10);
	F11 = sf::Keyboard::isKeyPressed(sf::Keyboard::F11);
	F12 = sf::Keyboard::isKeyPressed(sf::Keyboard::F12);
	F13 = sf::Keyboard::isKeyPressed(sf::Keyboard::F13);
	F14 = sf::Keyboard::isKeyPressed(sf::Keyboard::F14);
	F15 = sf::Keyboard::isKeyPressed(sf::Keyboard::F15);
	Pause = sf::Keyboard::isKeyPressed(sf::Keyboard::Pause);
}