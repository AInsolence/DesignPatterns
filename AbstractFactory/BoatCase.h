#pragma once
#include "Case.h"
class BoatCase :
	public Case
{
public:
	BoatCase();
	~BoatCase();

	void Wash() override final;
};

