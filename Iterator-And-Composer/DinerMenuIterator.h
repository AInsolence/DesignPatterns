#pragma once
#include "IIterator.h"
#include "DinerMenuIterator.h"
#include "DinerMenu.h"

class DinerMenuIterator :
	public IIterator
{
public:
	DinerMenuIterator(DinerMenu* DinerMenu);
	~DinerMenuIterator();

	virtual bool HasNext() override final;
	virtual MenuItem* Next() override final;
private:
	DinerMenu* _DinerMenu;
	int position = 0;
};

