#pragma once
#include <vector>
#include "IMenu.h"
#include "MenuItem.h"
#include "PancakeMenuIterator.h"

class PancakeHouseMenu : public IMenu
{
public:
	PancakeHouseMenu();
	~PancakeHouseMenu();

	virtual void AddItem(std::string Name, std::string	Description, 
						bool Vegetarian, double Price) override final;
	virtual IIterator* CreateIterator() override final;

private:
	std::vector<MenuItem*>* MenuItems;
};
