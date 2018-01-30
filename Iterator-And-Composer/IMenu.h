#pragma once
#include "IIterator.h"

class IMenu
{
public:
	IMenu();
	virtual ~IMenu();

	virtual void AddItem(std::string Name, std::string	Description,
		bool Vegetarian, double Price) = 0;
	virtual IIterator* CreateIterator() = 0;
};

