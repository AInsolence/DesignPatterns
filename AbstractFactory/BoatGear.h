#pragma once
#include "Gear.h"
class BoatGear :
	public Gear
{
public:
	BoatGear();
	~BoatGear();

	void CheckStatus() override final;
};

