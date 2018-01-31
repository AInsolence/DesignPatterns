#include "CafeMenuIterator.h"



CafeMenuIterator::CafeMenuIterator(std::map<std::string, MenuItem*>* CafeMenu)
{
	_CafeMenu = CafeMenu;
	map_iterator = _CafeMenu->begin();
}


CafeMenuIterator::~CafeMenuIterator()
{
}

MenuItem * CafeMenuIterator::Next()
{
	MenuItem* item = (*map_iterator).second;
	map_iterator++;
	return item;
}

bool CafeMenuIterator::HasNext()
{
	if (map_iterator != _CafeMenu->end())
	{
		return true;
	}
	return false;
}

void CafeMenuIterator::Remove()
{
}
