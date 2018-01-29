#pragma once
#include "MenuItem.h"

class IIterator
{
public:
	IIterator();
	~IIterator();

	virtual bool HasNext() = 0;
	virtual MenuItem* Next() = 0;
};

