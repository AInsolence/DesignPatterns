#include "DinerMenuIterator.h"



DinerMenuIterator::DinerMenuIterator(DinerMenu* DinerMenu)
{
	_DinerMenu = DinerMenu->GetItems();
	_position = _DinerMenu->begin();
}


DinerMenuIterator::~DinerMenuIterator()
{
}

bool DinerMenuIterator::HasNext()
{
	if (_position == _DinerMenu->end())
	{
		return false;
	}
	else
	{
		return true;
	}
}

MenuItem* DinerMenuIterator::Next()
{
	MenuItem* item = *_position;
	_position++;
	return item;
}
