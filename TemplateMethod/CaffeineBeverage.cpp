#include "CaffeineBeverage.h"



CaffeineBeverage::CaffeineBeverage()
{
}


CaffeineBeverage::~CaffeineBeverage()
{
}

void CaffeineBeverage::MakeBeverage()
{
	BoilWater();
	Brew();
	PourInCup();
	if (Hook())
	{
		AddCondiments();
	}
	std::cout << "Your beverage is done!" << std::endl;
}

void CaffeineBeverage::BoilWater()
{
	std::cout << "Boiling the water..." << std::endl;
}

void CaffeineBeverage::PourInCup()
{
	std::cout << "Pour beverage in a cup..." << std::endl;
}

bool CaffeineBeverage::Hook()
{
	return true;
}
