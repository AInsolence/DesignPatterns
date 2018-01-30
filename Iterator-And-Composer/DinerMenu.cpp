#include "DinerMenu.h"

DinerMenu::DinerMenu()
{
	MenuItems = new std::list<MenuItem*>;
	AddItem("Vegetarian BLT", "Description", true, 7.99);
	AddItem("BLT", "Description", false, 7.99);
	AddItem("Soup of the day", "Description", false, 5.99);
	AddItem("Hotdog", "Description", false, 1.99);
	AddItem("Steamed Veggies and Brown Rice", "Description", true, 1.99);
	AddItem("Pasta", "Description", false, 1.99);
}


DinerMenu::~DinerMenu()
{
}

void DinerMenu::AddItem(std::string Name, std::string Description, bool Vegetarian, double Price)
{
	MenuItems->push_back(new MenuItem(Name, Description, Vegetarian, Price));
}

IIterator* DinerMenu::CreateIterator()
{
	IIterator* DinerIterator = new DinerMenuIterator(MenuItems);
	return DinerIterator;
}
