#include "MenuIterator.h"



MenuIterator::MenuIterator(std::vector<MenuComponent*> items)
{
	_MenuItems = items;
	_position = 0;
}


MenuIterator::~MenuIterator()
{
}

bool MenuIterator::HasNext()
{
	if (_position >= _MenuItems.size())
	{
		return false;
	}
	else
	{
		return true;
	}
}

MenuComponent * MenuIterator::Next()
{
	MenuComponent* item = _MenuItems[_position];
	_position++;
	return item;
}

void MenuIterator::Remove()
{
	std::cout << "Unsupported operation for this type of menu component." << std::endl;
}
