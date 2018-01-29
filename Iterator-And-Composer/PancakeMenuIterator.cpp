#include "PancakeMenuIterator.h"



PancakeMenuIterator::PancakeMenuIterator(PancakeHouseMenu* PancakeMenu)
{
	_PancakeMenu = PancakeMenu->GetItems();
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
		return false;
	}
}

MenuItem * PancakeMenuIterator::Next()
{
	MenuItem* item = (*_PancakeMenu)[_position];
	_position++;
	return item;
}
