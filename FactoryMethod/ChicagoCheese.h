#pragma once
#include "Pizza.h"

class ChicagoCheese :
	public Pizza
{
public:
	ChicagoCheese();
	~ChicagoCheese();

	void Cut() override final;
};

