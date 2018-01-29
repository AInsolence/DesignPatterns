#pragma once
#include <vector>
#include "MenuItem.h"

class PancakeHouseMenu
{
public:
	PancakeHouseMenu();
	~PancakeHouseMenu();

	void AddItem(std::string Name, std::string	Description, 
						bool Vegetarian, double Price);
	std::vector<MenuItem*>* GetItems();

private:
	std::vector<MenuItem*>* MenuItems;
};

