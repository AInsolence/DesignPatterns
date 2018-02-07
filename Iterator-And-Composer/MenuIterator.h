#pragma once
#include "IIterator.h"
#include <vector>

class MenuIterator :
	public IIterator
{
public:
	MenuIterator(std::vector<MenuComponent*> items);
	virtual ~MenuIterator();

	virtual bool HasNext();
	virtual MenuComponent* Next();
	virtual void Remove();
private:
	size_t _position;
	std::vector<MenuComponent*> _MenuItems;
};

