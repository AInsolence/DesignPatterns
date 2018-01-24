#include "CoffeeBeverage.h"



CoffeeBeverage::CoffeeBeverage()
{
}


CoffeeBeverage::~CoffeeBeverage()
{
}

void CoffeeBeverage::Brew()
{
	std::cout << "Brew roasted coffee in a cup..." << std::endl;
	std::cout << "Dripping coffee through filter..." << std::endl;
}

void CoffeeBeverage::AddCondiments()
{
	std::cout << "Add sugar and hot milk..." << std::endl;
}

bool CoffeeBeverage::Hook()
{
	char answer = 'y';
	std::cout << "Do you want sugar and milk(y/n)?" << std::endl;
	std::cin >> answer;
	if (answer == 'n')
	{
		return false;
	}
	return true;
}
