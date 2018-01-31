#pragma once
#include "IMenu.h"
#include "CafeMenuIterator.h"
#include <map>
#include <string>

class CafeMenu :
	public IMenu
{
public:
	CafeMenu();
	~CafeMenu();

	virtual void AddItem(std::string Name, std::string	Description,
		bool Vegetarian, double Price) override final;
	virtual IIterator* CreateIterator() override final;

private:
	std::map<std::string, MenuItem*>* MenuItems;
};

