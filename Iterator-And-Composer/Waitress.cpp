#include "Waitress.h"



Waitress::Waitress(MenuComponent* AllMenus)
{
	_AllMenus = AllMenus;
}


Waitress::~Waitress()
{
}

void Waitress::PrintMenu()
{
	_AllMenus->Print();
}

bool Waitress::IsItemVegeterian(std::string ItemName)
{
	return false;
}
