#pragma once
#include <list>
#include "MenuItem.h"

class DinerMenu
{
public:
	DinerMenu();
	~DinerMenu();

	void AddItem(std::string Name, std::string	Description,
		bool Vegetarian, double Price);
	std::list<MenuItem*>* GetItems();

private:
	std::list<MenuItem*>* MenuItems;
};

