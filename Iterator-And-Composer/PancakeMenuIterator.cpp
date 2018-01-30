#include "PancakeMenuIterator.h"



PancakeMenuIterator::PancakeMenuIterator(std::vector<MenuItem*>* MenuItems)
{
	_PancakeMenu = MenuItems;
	_position = 0;
}


PancakeMenuIterator::~PancakeMenuIterator()
{
}

bool PancakeMenuIterator::HasNext()
{
	if (_position >= _PancakeMenu->size())
	{
		return false;
	}
	else
	{
		return true;
	}
}

MenuItem * PancakeMenuIterator::Next()
{
	MenuItem* item = (*_PancakeMenu)[_position];
	_position++;
	return item;
}
