#pragma once
#include "IIterator.h"
#include "DinerMenuIterator.h"
#include "DinerMenu.h"

class DinerMenuIterator :
	public IIterator
{
public:
	DinerMenuIterator(std::list<MenuItem*>* MenuItems);
	~DinerMenuIterator();

	virtual bool HasNext() override final;
	virtual MenuItem* Next() override final;
private:
	std::list<MenuItem*>* _DinerMenu;
	std::list<MenuItem*>::iterator _position;
};

