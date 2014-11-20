#pragma once

#include <SFML\Graphics.hpp>

/*!
* \file Keyboard.hpp
* \class Keyboard
* \brief This Singleton Manages any key presses.
* \details This Class is Singleton defined. It is an boundary object which keeps track of
* any pressed keys per update cycle.
* \author    Tom Verloop
* \version   1.0
* \date      2014-2015
* \warning   A Singleton
*/

class Keyboard
{
public:
	
	/*!
	*	\brief The deconstructor
	*/
	__declspec(dllexport) ~Keyboard();
	
	/*!
	*	\brief Returns the Keyboard instance
	*	\return Returns a reference to the keyboard object.
	*/
	__declspec(dllexport) static Keyboard & getInstance();

	/*!
	*	\brief the deleted copy constructor.
	*/
	__declspec(dllexport) Keyboard(const Keyboard &keyboard) = delete;

	/*!
	*	\brief the deleted assignment opperator.
	*/
	__declspec(dllexport) Keyboard& operator=(const Keyboard &keyboard) = delete;
	
	/*!
	*	\brief The update method to recheck every key.
	*/
	__declspec(dllexport) void update();

	/*!
	*	\Brief returns true if the A key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getA() { return A; }

	/*!
	*	\Brief returns true if the B key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getB() { return B; }

	/*!
	*	\Brief returns true if the C key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getC() { return C; }

	/*!
	*	\Brief returns true if the D key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getD() { return D; }

	/*!
	*	\Brief returns true if the E key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getE() { return E; }

	/*!
	*	\Brief returns true if the F key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getF() { return F; }

	/*!
	*	\Brief returns true if the G key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getG() { return G; }

	/*!
	*	\Brief returns true if the H key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getH() { return H; }

	/*!
	*	\Brief returns true if the I key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getI() { return I; }

	/*!
	*	\Brief returns true if the J key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getJ() { return J; }

	/*!
	*	\Brief returns true if the K key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getK() { return K; }

	/*!
	*	\Brief returns true if the L key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getL() { return L; }

	/*!
	*	\Brief returns true if the M key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getM(){ return M; }


	/*!
	*	\Brief returns true if the N key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getN() { return N; }

	/*!
	*	\Brief returns true if the O key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getO() { return O; }

	/*!
	*	\Brief returns true if the P key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getP() { return P; }

	/*!
	*	\Brief returns true if the Q key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getQ() { return Q; }

	/*!
	*	\Brief returns true if the R key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getR() { return R; }

	/*!
	*	\Brief returns true if the S key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getS() { return S; }

	/*!
	*	\Brief returns true if the T key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getT() { return T; }

	/*!
	*	\Brief returns true if the U key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getU() { return U; }

	/*!
	*	\Brief returns true if the V key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getV() { return V; }

	/*!
	*	\Brief returns true if the W key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getW() { return W; }

	/*!
	*	\Brief returns true if the X key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getX() { return X; }

	/*!
	*	\Brief returns true if the Y key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getY() { return Y; }

	/*!
	*	\Brief returns true if the Z key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getZ(){ return Z; }

	/*!
	*	\Brief returns true if the Numpad0 key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNum0(){ return Num0; }
	
	/*!
	*	\Brief returns true if the Numpad1 key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNum1() { return Num1; }

	/*!
	*	\Brief returns true if the Numpad2 key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNum2() { return Num2; }

	/*!
	*	\Brief returns true if the Numpad3 key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNum3() { return Num3; }

	/*!
	*	\Brief returns true if the Numpad4 key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNum4() { return Num4; }

	/*!
	*	\Brief returns true if the Numpad5 key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNum5() { return Num5; }

	/*!
	*	\Brief returns true if the Numpad6 key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNum6() { return Num6; }

	/*!
	*	\Brief returns true if the Numpad7 key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNum7() { return Num7; }

	/*!
	*	\Brief returns true if the Numpad8 key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNum8() { return Num8; }

	/*!
	*	\Brief returns true if the Numpad9 key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNum9() { return Num9; }

	/*!
	*	\Brief returns true if the Escape key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getEscape() { return Escape; }

	/*!
	*	\Brief returns true if the Left Control key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getLControl() { return LControl; }

	/*!
	*	\Brief returns true if the Left Shift key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getLShift() { return LShift; }

	/*!
	*	\Brief returns true if the Left Alt key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getLAlt() { return LAlt; }

	/*!
	*	\Brief returns true if the Left System key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getLSystem() { return LSystem; }

	/*!
	*	\Brief returns true if the Right Control key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getRControl() { return RControl; }

	/*!
	*	\Brief returns true if the Right Shift key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getRShift() { return RShift; }

	/*!
	*	\Brief returns true if the Right Alt key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getRAlt() { return RAlt; }

	/*!
	*	\Brief returns true if the Right System key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getRSystem() { return RSystem; }

	/*!
	*	\Brief returns true if the Menu key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getMenu() { return Menu; }

	/*!
	*	\Brief returns true if the Left Bracket key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getLBracket() { return LBracket; }

	/*!
	*	\Brief returns true if the Right Bracket key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getRBracket() { return RBracket; }

	/*!
	*	\Brief returns true if the Semicolon key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getSemiColon() { return SemiColon; }

	/*!
	*	\Brief returns true if the Comma key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getComma() { return Comma; }

	/*!
	*	\Brief returns true if the Period key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getPeriod() { return Period; }

	/*!
	*	\Brief returns true if the Quote key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getQuote() { return Quote; }

	/*!
	*	\Brief returns true if the Slash key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getSlash() { return Slash; }

	/*!
	*	\Brief returns true if the Backslash key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getBackSlash() { return BackSlash; }

	/*!
	*	\Brief returns true if the Tilde key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getTilde() { return Tilde; }

	/*!
	*	\Brief returns true if the Equal key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getEqual() { return Equal; }

	/*!
	*	\Brief returns true if the Dash key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getDash() { return Dash; }

	/*!
	*	\Brief returns true if the Space bar ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getSpace() { return Space; }

	/*!
	*	\Brief returns true if the Return key ispressed.
	*	\brief returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getReturn() { return Return; }

	/*!
	*	\Brief returns true if the Backspace key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getBackSpace() { return BackSpace; }

	/*!
	*	\Brief returns true if the Tab key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getTab() { return Tab; }

	/*!
	*	\Brief returns true if the PageUp key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getPageUp() { return PageUp; }

	/*!
	*	\Brief returns true if the PageDown key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getPageDown() { return PageDown; }

	/*!
	*	\Brief returns true if the End key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getEnd() { return End; }

	/*!
	*	\Brief returns true if the Home key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getHome() { return Home; }

	/*!
	*	\Brief returns true if the Insert key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getInsert() { return Insert; }

	/*!
	*	\Brief returns true if the Delete key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getDelete() { return Delete; }

	/*!
	*	\Brief returns true if the Add key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getAdd() { return Add; }

	/*!
	*	\Brief returns true if the Substract key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getSubtract() { return Subtract; }

	/*!
	*	\Brief returns true if the Multiply key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getMultiply(){ return Multiply; }

	/*!
	*	\Brief returns true if the Divide key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getDivide() { return Divide; }

	/*!
	*	\Brief returns true if the Left key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getLeft() { return Left; }

	/*!
	*	\Brief returns true if the Right key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getRight() { return Right; }

	/*!
	*	\Brief returns true if the Up key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getUp() { return Up; }

	/*!
	*	\Brief returns true if the Down key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getDown(){ return Down; }

	/*!
	*	\Brief returns true if the Numpad0 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNumpad0() { return Numpad0; }

	/*!
	*	\Brief returns true if the Numpad1 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNumpad1() { return Numpad1; }

	/*!
	*	\Brief returns true if the Numpad2 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNumpad2() { return Numpad2; }

	/*!
	*	\Brief returns true if the Numpad3 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNumpad3() { return Numpad3; }

	/*!
	*	\Brief returns true if the Numpad4 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNumpad4() { return Numpad4; }

	/*!
	*	\Brief returns true if the Numpad5 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNumpad5() { return Numpad5; }

	/*!
	*	\Brief returns true if the Numpad6 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNumpad6() { return Numpad6; }

	/*!
	*	\Brief returns true if the Numpad7 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNumpad7() { return Numpad7; }

	/*!
	*	\Brief returns true if the Numpad8 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNumpad8() { return Numpad8; }

	/*!
	*	\Brief returns true if the Numpad9 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getNumpad9(){ return Numpad9; }

	/*!
	*	\Brief returns true if the F1 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getF1() { return F1; }

	/*!
	*	\Brief returns true if the F2 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getF2() { return F2; }

	/*!
	*	\Brief returns true if the F3 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getF3() { return F3; }

	/*!
	*	\Brief returns true if the F4 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getF4() { return F4; }

	/*!
	*	\Brief returns true if the F5 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getF5() { return F5; }

	/*!
	*	\Brief returns true if the F6 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getF6() { return F6; }

	/*!
	*	\Brief returns true if the F7 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getF7() { return F7; }

	/*!
	*	\Brief returns true if the F8 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getF8() { return F8; }

	/*!
	*	\Brief returns true if the F9 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getF9() { return F9; }

	/*!
	*	\Brief returns true if the F10 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getF10() { return F10; }

	/*!
	*	\Brief returns true if the F11 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getF11() { return F11; }

	/*!
	*	\Brief returns true if the F12 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getF12() { return F12; }

	/*!
	*	\Brief returns true if the F13 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getF13() { return F13; }

	/*!
	*	\Brief returns true if the F14 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getF14() { return F14; }

	/*!
	*	\Brief returns true if the 15 key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getF15() { return F15; }

	/*!
	*	\Brief returns true if the Pause key ispressed.
	*	\return returns true if the key is pressed.
	*/
	__declspec(dllexport) bool getPause(){ return Pause; }

private:

	/*!
	*	\brief The default Constructor.
	*/
	__declspec(dllexport) Keyboard();

	//! \brief Contains The status of the A Key.
	bool  A;
	//! \brief Contains The status of the B Key.
	bool  B;
	//! \brief Contains The status of the C Key.
	bool  C;
	//! \brief Contains The status of the D Key.
	bool  D;
	//! \brief Contains The status of the E Key.
	bool  E;
	//! \brief Contains The status of the F Key.
	bool  F;
	//! \brief Contains The status of the G Key.
	bool  G;
	//! \brief Contains The status of the H Key.
	bool  H;
	//! \brief Contains The status of the I Key.
	bool  I;
	//! \brief Contains The status of the J Key.
	bool  J;
	//! \brief Contains The status of the K Key.
	bool  K;
	//! \brief Contains The status of the L Key.
	bool  L;
	//! \brief Contains The status of the M Key.
	bool  M;
	//! \brief Contains The status of the N Key.
	bool  N;
	//! \brief Contains The status of the O Key.
	bool  O;
	//! \brief Contains The status of the P Key.
	bool  P;
	//! \brief Contains The status of the Q Key.
	bool  Q;
	//! \brief Contains The status of the R Key.
	bool  R;
	//! \brief Contains The status of the S Key.
	bool  S;
	//! \brief Contains The status of the T Key.
	bool  T;
	//! \brief Contains The status of the U Key.
	bool  U;
	//! \brief Contains The status of the V Key.
	bool  V;
	//! \brief Contains The status of the W Key.
	bool  W;
	//! \brief Contains The status of the X Key.
	bool  X;
	//! \brief Contains The status of the Y Key.
	bool  Y;
	//! \brief Contains The status of the Z Key.
	bool  Z;
	//! \brief Contains The status of the Num0 Key.
	bool  Num0;
	//! \brief Contains The status of the Num1 Key.
	bool  Num1;
	//! \brief Contains The status of the Num2 Key.
	bool  Num2;
	//! \brief Contains The status of the Num3 Key.
	bool  Num3;
	//! \brief Contains The status of the Num4 Key.
	bool  Num4;
	//! \brief Contains The status of the Num5 Key.
	bool  Num5;
	//! \brief Contains The status of the Num6 Key.
	bool  Num6;
	//! \brief Contains The status of the Num7 Key.
	bool  Num7;
	//! \brief Contains The status of the Num8 Key.
	bool  Num8;
	//! \brief Contains The status of the Num9 Key.
	bool  Num9;
	//! \brief Contains The status of the Escape Key.
	bool  Escape;
	//! \brief Contains The status of the Left Control Key.
	bool  LControl;
	//! \brief Contains The status of the Left Shift Key.
	bool  LShift;
	//! \brief Contains The status of the Left Alt Key.
	bool  LAlt;
	//! \brief Contains The status of the Left System Key.
	bool  LSystem;
	//! \brief Contains The status of the Right Control Key.
	bool  RControl;
	//! \brief Contains The status of the Right Shift Key.
	bool  RShift;
	//! \brief Contains The status of the Right Alt Key.
	bool  RAlt;
	//! \brief Contains The status of the Right System Key.
	bool  RSystem;
	//! \brief Contains The status of the Menu Key.
	bool  Menu;
	//! \brief Contains The status of the Left Bracket Key.
	bool  LBracket;
	//! \brief Contains The status of the Right Bracket Key.
	bool  RBracket;
	//! \brief Contains The status of the Semicolon Key.
	bool  SemiColon;
	//! \brief Contains The status of the Comma Key.
	bool  Comma;
	//! \brief Contains The status of the Period Key.
	bool  Period;
	//! \brief Contains The status of the Quote Key.
	bool  Quote;
	//! \brief Contains The status of the Slash Key.
	bool  Slash;
	//! \brief Contains The status of the Backslash Key.
	bool  BackSlash;
	//! \brief Contains The status of the Tilde Key.
	bool  Tilde;
	//! \brief Contains The status of the Equal Key.
	bool  Equal;
	//! \brief Contains The status of the Dash Key.
	bool  Dash;
	//! \brief Contains The status of the Space Key.
	bool  Space;
	//! \brief Contains The status of the Return Key.
	bool  Return;
	//! \brief Contains The status of the Backspace Key.
	bool  BackSpace;
	//! \brief Contains The status of the Tab Key.
	bool  Tab;
	//! \brief Contains The status of the PageUp Key.
	bool  PageUp;
	//! \brief Contains The status of the PageDown Key.
	bool  PageDown;
	//! \brief Contains The status of the End Key.
	bool  End;
	//! \brief Contains The status of the Home Key.
	bool  Home;
	//! \brief Contains The status of the Insert Key.
	bool  Insert;
	//! \brief Contains The status of the Delete Key.
	bool  Delete;
	//! \brief Contains The status of the Add Key.
	bool  Add;
	//! \brief Contains The status of the Substract Key.
	bool  Subtract;
	//! \brief Contains The status of the Multiply Key.
	bool  Multiply;
	//! \brief Contains The status of the Devide Key.
	bool  Divide;
	//! \brief Contains The status of the Left Key.
	bool  Left;
	//! \brief Contains The status of the Right Key.
	bool  Right;
	//! \brief Contains The status of the Up Key.
	bool  Up;
	//! \brief Contains The status of the Down Key.
	bool  Down;
	//! \brief Contains The status of the Numpad0 Key.
	bool  Numpad0;
	//! \brief Contains The status of the Numpad1 Key.
	bool  Numpad1;
	//! \brief Contains The status of the Numpad2 Key.
	bool  Numpad2;
	//! \brief Contains The status of the Numpad3 Key.
	bool  Numpad3;
	//! \brief Contains The status of the Numpad4 Key.
	bool  Numpad4;
	//! \brief Contains The status of the Numpad5 Key.
	bool  Numpad5;
	//! \brief Contains The status of the Numpad6 Key.
	bool  Numpad6;
	//! \brief Contains The status of the Numpad7 Key.
	bool  Numpad7;
	//! \brief Contains The status of the Numpad8 Key.
	bool  Numpad8;
	//! \brief Contains The status of the Numpad9 Key.
	bool  Numpad9;
	//! \brief Contains The status of the F1 Key.
	bool  F1;
	//! \brief Contains The status of the F2 Key.
	bool  F2;
	//! \brief Contains The status of the F3 Key.
	bool  F3;
	//! \brief Contains The status of the F4 Key.
	bool  F4;
	//! \brief Contains The status of the F5 Key.
	bool  F5;
	//! \brief Contains The status of the F6 Key.
	bool  F6;
	//! \brief Contains The status of the F7 Key.
	bool  F7;
	//! \brief Contains The status of the F8 Key.
	bool  F8;
	//! \brief Contains The status of the F9 Key.
	bool  F9;
	//! \brief Contains The status of the F10 Key.
	bool  F10;
	//! \brief Contains The status of the F11 Key.
	bool  F11;
	//! \brief Contains The status of the F12 Key.
	bool  F12;
	//! \brief Contains The status of the F13 Key.
	bool  F13;
	//! \brief Contains The status of the F14 Key.
	bool  F14;
	//! \brief Contains The status of the F15 Key.
	bool  F15;
	bool  Pause;

};