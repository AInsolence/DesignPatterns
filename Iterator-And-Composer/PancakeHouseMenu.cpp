#include "PancakeHouseMenu.h"



PancakeHouseMenu::PancakeHouseMenu()
{
	MenuItems = new std::vector<MenuItem*>;
	AddItem("K&B's Pancake Breakfast", "Description", true, 3.99);
	AddItem("Regular Pancake Breakfast", "Description", true, 2.99);
	AddItem("Blueberry Pancakes", "Description", true, 3.99);
	AddItem("Waffles", "Description", true, 1.99);
}


PancakeHouseMenu::~PancakeHouseMenu()
{
}

void PancakeHouseMenu::AddItem(std::string Name, std::string	Description,
											bool Vegetarian, double Price)
{
	MenuItems->push_back(new MenuItem(Name, Description, Vegetarian, Price));
}

IIterator* PancakeHouseMenu::CreateIterator()
{
	IIterator* BreakfestIterator = new PancakeMenuIterator(MenuItems);
	return BreakfestIterator;
}