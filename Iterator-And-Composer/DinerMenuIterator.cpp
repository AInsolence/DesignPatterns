#include "DinerMenuIterator.h"



DinerMenuIterator::DinerMenuIterator(DinerMenu* DinerMenu)
{
	_DinerMenu = DinerMenu;
}


DinerMenuIterator::~DinerMenuIterator()
{
}

MenuItem* DinerMenuIterator::Next()
{
	MenuItem* item = nullptr;
	return item;
}
