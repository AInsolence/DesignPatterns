#pragma once
#include <list>
#include "MenuItem.h"
#include "DinerMenuIterator.h"

class DinerMenu
{
public:
	DinerMenu();
	~DinerMenu();

	void AddItem(std::string Name, std::string	Description,
		bool Vegetarian, double Price);
	IIterator* CreateIterator();

private:
	std::list<MenuItem*>* MenuItems;
};

