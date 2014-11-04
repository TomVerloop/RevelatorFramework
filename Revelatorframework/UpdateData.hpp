#pragma once
#include <SFML\Graphics.hpp>
class UpdateData
{
public:
	UpdateData(sf::RenderWindow * window);
	~UpdateData();
	void MoveCamera(sf::Vector2f direction);
	void SetCameraPosition(sf::Vector2f Position);
	sf::Vector2f getMousePosition();
	

	bool getA(){ return A; }
	bool getB(){ return B; }
	bool getC(){ return C; }
	bool getD(){ return D; }
	bool getE(){ return E; }
	bool getF(){ return F; }
	bool getG(){ return G; }
	bool getH(){ return H; }
	bool getI(){ return I; }
	bool getJ(){ return J; }
	bool getK(){ return K; }
	bool getL(){ return L; }
	bool getM(){ return M; }
	bool getN(){ return N; }
	bool getO(){ return O; }
	bool getP(){ return P; }
	bool getQ(){ return Q; }
	bool getR(){ return R; }
	bool getS(){ return S; }
	bool getT(){ return T; }
	bool getU(){ return U; }
	bool getV(){ return V; }
	bool getW(){ return W; }
	bool getX(){ return X; }
	bool getY(){ return Y; }
	bool getZ(){ return Z; }
	bool getNum0(){ return Num0; }
	bool getNum1(){ return Num1; }
	bool getNum2(){ return Num2; }
	bool getNum3(){ return Num3; }
	bool getNum4(){ return Num4; }
	bool getNum5(){ return Num5; }
	bool getNum6(){ return Num6; }
	bool getNum7(){ return Num7; }
	bool getNum8(){ return Num8; }
	bool getNum9(){ return Num9; }
	bool getEscape(){ return Escape; }
	bool getLControl(){ return LControl; }
	bool getLShift(){ return LShift; }
	bool getLAlt(){ return LAlt; }
	bool getLSystem(){ return LSystem; }
	bool getRControl(){ return RControl; }
	bool getRShift(){ return RShift; }
	bool getRAlt(){ return RAlt; }
	bool getRSystem(){ return RSystem; }
	bool getMenu(){ return Menu; }
	bool getLBracket(){ return LBracket; }
	bool getRBracket(){ return RBracket; }
	bool getSemiColon(){ return SemiColon; }
	bool getComma(){ return Comma; }
	bool getPeriod(){ return Period; }
	bool getQuote(){ return Quote; }
	bool getSlash(){ return Slash; }
	bool getBackSlash(){ return BackSlash; }
	bool getTilde(){ return Tilde; }
	bool getEqual(){ return Equal; }
	bool getDash(){ return Dash; }
	bool getSpace(){ return Space; }
	bool getReturn(){ return Return; }
	bool getBackSpace(){ return BackSpace; }
	bool getTab(){ return Tab; }
	bool getPageUp(){ return PageUp; }
	bool getPageDown(){ return PageDown; }
	bool getEnd(){ return End; }
	bool getHome(){ return Home; }
	bool getInsert(){ return Insert; }
	bool getDelete(){ return Delete; }
	bool getAdd(){ return Add; }
	bool getSubtract(){ return Subtract; }
	bool getMultiply(){ return Multiply; }
	bool getDivide(){ return Divide; }
	bool getLeft(){ return Left; }
	bool getRight(){ return Right; }
	bool getUp(){ return Up; }
	bool getDown(){ return Down; }
	bool getNumpad0(){ return Numpad0; }
	bool getNumpad1(){ return Numpad1; }
	bool getNumpad2(){ return Numpad2; }
	bool getNumpad3(){ return Numpad3; }
	bool getNumpad4(){ return Numpad4; }
	bool getNumpad5(){ return Numpad5; }
	bool getNumpad6(){ return Numpad6; }
	bool getNumpad7(){ return Numpad7; }
	bool getNumpad8(){ return Numpad8; }
	bool getNumpad9(){ return Numpad9; }
	bool getF1(){ return F1; }
	bool getF2(){ return F2; }
	bool getF3(){ return F3; }
	bool getF4(){ return F4; }
	bool getF5(){ return F5; }
	bool getF6(){ return F6; }
	bool getF7(){ return F7; }
	bool getF8(){ return F8; }
	bool getF9(){ return F9; }
	bool getF10(){ return F10; }
	bool getF11(){ return F11; }
	bool getF12(){ return F12; }
	bool getF13(){ return F13; }
	bool getF14(){ return F14; }
	bool getF15(){ return F15; }
	bool getPause(){ return Pause; }
	bool getMouseLeft(){ return MouseLeft; }
	bool getMouseRight(){ return MouseRight; }
	bool getMouseMiddle(){ return MouseMiddle; }
	bool getMouseXButton1(){ return MouseXButton1; }
	bool getMouseXButton2(){ return MouseXButton2; }



private:
	sf::RenderWindow * Window;
	sf::Vector2f CameraPosition;
	sf::Vector2f MousePosition;
	bool  A;
	bool  B;
	bool  C;
	bool  D;
	bool  E;
	bool  F;
	bool  G;
	bool  H;
	bool  I;
	bool  J;
	bool  K;
	bool  L;
	bool  M;
	bool  N;
	bool  O;
	bool  P;
	bool  Q;
	bool  R;
	bool  S;
	bool  T;
	bool  U;
	bool  V;
	bool  W;
	bool  X;
	bool  Y;
	bool  Z;
	bool  Num0;
	bool  Num1;
	bool  Num2;
	bool  Num3;
	bool  Num4;
	bool  Num5;
	bool  Num6;
	bool  Num7;
	bool  Num8;
	bool  Num9;
	bool  Escape;
	bool  LControl;
	bool  LShift;
	bool  LAlt;
	bool  LSystem;
	bool  RControl;
	bool  RShift;
	bool  RAlt;
	bool  RSystem;
	bool  Menu;
	bool  LBracket;
	bool  RBracket;
	bool  SemiColon;
	bool  Comma;
	bool  Period;
	bool  Quote;
	bool  Slash;
	bool  BackSlash;
	bool  Tilde;
	bool  Equal;
	bool  Dash;
	bool  Space;
	bool  Return;
	bool  BackSpace;
	bool  Tab;
	bool  PageUp;
	bool  PageDown;
	bool  End;
	bool  Home;
	bool  Insert;
	bool  Delete;
	bool  Add;
	bool  Subtract;
	bool  Multiply;
	bool  Divide;
	bool  Left;
	bool  Right;
	bool  Up;
	bool  Down;
	bool  Numpad0;
	bool  Numpad1;
	bool  Numpad2;
	bool  Numpad3;
	bool  Numpad4;
	bool  Numpad5;
	bool  Numpad6;
	bool  Numpad7;
	bool  Numpad8;
	bool  Numpad9;
	bool  F1;
	bool  F2;
	bool  F3;
	bool  F4;
	bool  F5;
	bool  F6;
	bool  F7;
	bool  F8;
	bool  F9;
	bool  F10;
	bool  F11;
	bool  F12;
	bool  F13;
	bool  F14;
	bool  F15;
	bool  Pause;
	bool MouseLeft;
	bool MouseRight;
	bool MouseMiddle;
	bool MouseXButton1;
	bool MouseXButton2;
};