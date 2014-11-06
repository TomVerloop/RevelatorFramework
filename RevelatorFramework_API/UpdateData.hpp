#pragma once
#include <SFML\Graphics.hpp>
class UpdateData
{
public:
	__declspec(dllexport) UpdateData(sf::RenderWindow * window);
	__declspec(dllexport) ~UpdateData();
	__declspec(dllexport) void MoveCamera(sf::Vector2f direction);
	__declspec(dllexport) void SetCameraPosition(sf::Vector2f Position);
	__declspec(dllexport) sf::Vector2f getMousePosition();
	

	__declspec(dllexport) bool getA(){ return A; }
	__declspec(dllexport) bool getB(){ return B; }
	__declspec(dllexport) bool getC(){ return C; }
	__declspec(dllexport) bool getD(){ return D; }
	__declspec(dllexport) bool getE(){ return E; }
	__declspec(dllexport) bool getF(){ return F; }
	__declspec(dllexport) bool getG(){ return G; }
	__declspec(dllexport) bool getH(){ return H; }
	__declspec(dllexport) bool getI(){ return I; }
	__declspec(dllexport) bool getJ(){ return J; }
	__declspec(dllexport) bool getK(){ return K; }
	__declspec(dllexport) bool getL(){ return L; }
	__declspec(dllexport) bool getM(){ return M; }
	__declspec(dllexport) bool getN(){ return N; }
	__declspec(dllexport) bool getO(){ return O; }
	__declspec(dllexport) bool getP(){ return P; }
	__declspec(dllexport) bool getQ(){ return Q; }
	__declspec(dllexport) bool getR(){ return R; }
	__declspec(dllexport) bool getS(){ return S; }
	__declspec(dllexport) bool getT(){ return T; }
	__declspec(dllexport) bool getU(){ return U; }
	__declspec(dllexport) bool getV(){ return V; }
	__declspec(dllexport) bool getW(){ return W; }
	__declspec(dllexport) bool getX(){ return X; }
	__declspec(dllexport) bool getY(){ return Y; }
	__declspec(dllexport) bool getZ(){ return Z; }
	__declspec(dllexport) bool getNum0(){ return Num0; }
	__declspec(dllexport) bool getNum1(){ return Num1; }
	__declspec(dllexport) bool getNum2(){ return Num2; }
	__declspec(dllexport) bool getNum3(){ return Num3; }
	__declspec(dllexport) bool getNum4(){ return Num4; }
	__declspec(dllexport) bool getNum5(){ return Num5; }
	__declspec(dllexport) bool getNum6(){ return Num6; }
	__declspec(dllexport) bool getNum7(){ return Num7; }
	__declspec(dllexport) bool getNum8(){ return Num8; }
	__declspec(dllexport) bool getNum9(){ return Num9; }
	__declspec(dllexport) bool getEscape(){ return Escape; }
	__declspec(dllexport) bool getLControl(){ return LControl; }
	__declspec(dllexport) bool getLShift(){ return LShift; }
	__declspec(dllexport) bool getLAlt(){ return LAlt; }
	__declspec(dllexport) bool getLSystem(){ return LSystem; }
	__declspec(dllexport) bool getRControl(){ return RControl; }
	__declspec(dllexport) bool getRShift(){ return RShift; }
	__declspec(dllexport) bool getRAlt(){ return RAlt; }
	__declspec(dllexport) bool getRSystem(){ return RSystem; }
	__declspec(dllexport) bool getMenu(){ return Menu; }
	__declspec(dllexport) bool getLBracket(){ return LBracket; }
	__declspec(dllexport) bool getRBracket(){ return RBracket; }
	__declspec(dllexport) bool getSemiColon(){ return SemiColon; }
	__declspec(dllexport) bool getComma(){ return Comma; }
	__declspec(dllexport) bool getPeriod(){ return Period; }
	__declspec(dllexport) bool getQuote(){ return Quote; }
	__declspec(dllexport) bool getSlash(){ return Slash; }
	__declspec(dllexport) bool getBackSlash(){ return BackSlash; }
	__declspec(dllexport) bool getTilde(){ return Tilde; }
	__declspec(dllexport) bool getEqual(){ return Equal; }
	__declspec(dllexport) bool getDash(){ return Dash; }
	__declspec(dllexport) bool getSpace(){ return Space; }
	__declspec(dllexport) bool getReturn(){ return Return; }
	__declspec(dllexport) bool getBackSpace(){ return BackSpace; }
	__declspec(dllexport) bool getTab(){ return Tab; }
	__declspec(dllexport) bool getPageUp(){ return PageUp; }
	__declspec(dllexport) bool getPageDown(){ return PageDown; }
	__declspec(dllexport) bool getEnd(){ return End; }
	__declspec(dllexport) bool getHome(){ return Home; }
	__declspec(dllexport) bool getInsert(){ return Insert; }
	__declspec(dllexport) bool getDelete(){ return Delete; }
	__declspec(dllexport) bool getAdd(){ return Add; }
	__declspec(dllexport) bool getSubtract(){ return Subtract; }
	__declspec(dllexport) bool getMultiply(){ return Multiply; }
	__declspec(dllexport) bool getDivide(){ return Divide; }
	__declspec(dllexport) bool getLeft(){ return Left; }
	__declspec(dllexport) bool getRight(){ return Right; }
	__declspec(dllexport) bool getUp(){ return Up; }
	__declspec(dllexport) bool getDown(){ return Down; }
	__declspec(dllexport) bool getNumpad0(){ return Numpad0; }
	__declspec(dllexport) bool getNumpad1(){ return Numpad1; }
	__declspec(dllexport) bool getNumpad2(){ return Numpad2; }
	__declspec(dllexport) bool getNumpad3(){ return Numpad3; }
	__declspec(dllexport) bool getNumpad4(){ return Numpad4; }
	__declspec(dllexport) bool getNumpad5(){ return Numpad5; }
	__declspec(dllexport) bool getNumpad6(){ return Numpad6; }
	__declspec(dllexport) bool getNumpad7(){ return Numpad7; }
	__declspec(dllexport) bool getNumpad8(){ return Numpad8; }
	__declspec(dllexport) bool getNumpad9(){ return Numpad9; }
	__declspec(dllexport) bool getF1(){ return F1; }
	__declspec(dllexport) bool getF2(){ return F2; }
	__declspec(dllexport) bool getF3(){ return F3; }
	__declspec(dllexport) bool getF4(){ return F4; }
	__declspec(dllexport) bool getF5(){ return F5; }
	__declspec(dllexport) bool getF6(){ return F6; }
	__declspec(dllexport) bool getF7(){ return F7; }
	__declspec(dllexport) bool getF8(){ return F8; }
	__declspec(dllexport) bool getF9(){ return F9; }
	__declspec(dllexport) bool getF10(){ return F10; }
	__declspec(dllexport) bool getF11(){ return F11; }
	__declspec(dllexport) bool getF12(){ return F12; }
	__declspec(dllexport) bool getF13(){ return F13; }
	__declspec(dllexport) bool getF14(){ return F14; }
	__declspec(dllexport) bool getF15(){ return F15; }
	__declspec(dllexport) bool getPause(){ return Pause; }
	__declspec(dllexport) bool getMouseLeft(){ return MouseLeft; }
	__declspec(dllexport) bool getMouseRight(){ return MouseRight; }
	__declspec(dllexport) bool getMouseMiddle(){ return MouseMiddle; }
	__declspec(dllexport) bool getMouseXButton1(){ return MouseXButton1; }
	__declspec(dllexport) bool getMouseXButton2(){ return MouseXButton2; }



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