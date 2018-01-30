#pragma once
#include <list>
#include "IMenu.h"
#include "MenuItem.h"
#include "DinerMenuIterator.h"

class DinerMenu : public IMenu
{
public:
	DinerMenu();
	~DinerMenu();

	virtual void AddItem(std::string Name, std::string	Description,
		bool Vegetarian, double Price) override final;
	virtual IIterator* CreateIterator();

private:
	std::list<MenuItem*>* MenuItems;
};
