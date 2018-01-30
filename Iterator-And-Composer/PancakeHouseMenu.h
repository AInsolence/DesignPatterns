#pragma once
#include <vector>
#include "MenuItem.h"
#include "PancakeMenuIterator.h"

class PancakeHouseMenu
{
public:
	PancakeHouseMenu();
	~PancakeHouseMenu();

	void AddItem(std::string Name, std::string	Description, 
						bool Vegetarian, double Price);
	IIterator* CreateIterator();

private:
	std::vector<MenuItem*>* MenuItems;
};

