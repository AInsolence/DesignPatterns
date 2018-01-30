#include "Waitress.h"



Waitress::Waitress(IMenu* PancakeMenu, IMenu* DinerMenu)
{
	DinerIter = DinerMenu->CreateIterator();
	PancakeIter = PancakeMenu->CreateIterator();
}


Waitress::~Waitress()
{
}

void Waitress::PrintMenu()
{
	PrintBreakfestMenu();
	PrintLunchMenu();
}

void Waitress::PrintMenu(IIterator* Iterator)
{
	while (Iterator->HasNext())
	{
		MenuItem* item = Iterator->Next();
		std::cout << item->GetName() << std::endl;
		std::cout << item->GetDescription() << std::endl;
		std::cout << item->isVegetarian() << std::endl;
		std::cout << item->GetPrice() << std::endl;
		std::cout << std::endl;
	}
}

void Waitress::PrintBreakfestMenu()
{
	std::cout << "BEAKFEST MENU: \n" << std::endl;
	PrintMenu(PancakeIter);
}

void Waitress::PrintLunchMenu()
{
	std::cout << "LUNCH MENU: \n" << std::endl;
	PrintMenu(DinerIter);
}

void Waitress::PrintVegeterianMenu()
{	
}

bool Waitress::IsItemVegeterian(std::string ItemName)
{
	return false;
}
