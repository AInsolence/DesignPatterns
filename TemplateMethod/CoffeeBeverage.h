#pragma once
#include "CaffeineBeverage.h"
class CoffeeBeverage :
	public CaffeineBeverage
{
public:
	CoffeeBeverage();
	~CoffeeBeverage();
private:
	virtual void Brew() override final;
	virtual void AddCondiments() override final;
	virtual bool Hook() override final;
};

