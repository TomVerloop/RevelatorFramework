#pragma once
#include <Layer.hpp>
class ExampleLayer :
	public Layer
{
public:
	ExampleLayer();
	~ExampleLayer();
	void UpdateHandle(const UpdateData & updateobject) override {};
};