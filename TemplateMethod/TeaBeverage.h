#pragma once
#include "CaffeineBeverage.h"
#include <iostream>

class TeaBeverage :
	public CaffeineBeverage
{
public:
	TeaBeverage();
	~TeaBeverage();
private:
	virtual void Brew() override final;
	virtual void AddCondiments() override final;
};

