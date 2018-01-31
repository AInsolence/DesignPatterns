#include "CafeMenu.h"



CafeMenu::CafeMenu()
{
	MenuItems = new std::map<std::string, MenuItem*>;
	AddItem("Veggie Burger", "Description", true, 5.99);
	AddItem("Buritto", "Description", false, 6.99);
	AddItem("Soup of the day", "Description", true, 3.99);
	AddItem("Doner", "Description", false, 5.99);
}


CafeMenu::~CafeMenu()
{
}

void CafeMenu::AddItem(std::string Name, std::string Description, bool Vegetarian, double Price)
{
	MenuItem* item = new MenuItem(Name, Description, Vegetarian, Price);
	MenuItems->insert(std::make_pair(item->GetName(), item));
}

IIterator * CafeMenu::CreateIterator()
{
	IIterator* iter = new CafeMenuIterator(MenuItems);
	return iter;
}
