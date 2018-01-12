#pragma once
#include "Engine.h"
class BoatEngine :
	public Engine
{
public:
	BoatEngine();
	~BoatEngine();

	void FillWithFuel() override final;
};

