#pragma once
#include <iostream>

class CaffeineBeverage
{
public:
	CaffeineBeverage();
	~CaffeineBeverage();

	virtual void MakeBeverage() final;

protected:
	virtual void BoilWater() final;
	virtual void PourInCup() final;
	virtual void Brew() = 0;
	virtual void AddCondiments() = 0;
	virtual bool Hook();
};
