#pragma once
#include "Engine.h"
class CarEngine :
	public Engine
{
public:
	CarEngine();
	~CarEngine();

	void FillWithFuel() override final;
};

