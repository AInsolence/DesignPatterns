#include "Waitress.h"



Waitress::Waitress(IMenu* PancakeMenu, IMenu* DinerMenu, IMenu* CafeMenu)
{
	DinerIter = DinerMenu->CreateIterator();
	PancakeIter = PancakeMenu->CreateIterator();
	CafeIter = CafeMenu->CreateIterator();
}


Waitress::~Waitress()
{
}

void Waitress::PrintMenu()
{
	PrintBreakfestMenu();
	PrintLunchMenu();
	PrintCafeMenu();
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

void Waitress::PrintCafeMenu()
{
	std::cout << "CAFE MENU: \n" << std::endl;
	PrintMenu(CafeIter);
}

void Waitress::PrintVegeterianMenu()
{	
}

bool Waitress::IsItemVegeterian(std::string ItemName)
{
	return false;
}
