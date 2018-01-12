#pragma once
#include "Case.h"
class CarCase :
	public Case
{
public:
	CarCase();
	~CarCase();

	void Wash()override final;
};

