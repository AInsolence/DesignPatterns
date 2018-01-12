#pragma once
#include "Gear.h"
class CarGear :
	public Gear
{
public:
	CarGear();
	~CarGear();

	void CheckStatus() override final;
};

