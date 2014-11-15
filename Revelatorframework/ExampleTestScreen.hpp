#pragma once
#include <GameScreen.hpp>
class ExampleTestScreen :
	public GameScreen
{
public:
	ExampleTestScreen();
	~ExampleTestScreen();
	void UpdateHandle(const UpdateData & updateobject) override {};
	void Entry(EntryObject object) override {};
};