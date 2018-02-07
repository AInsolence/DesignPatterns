#pragma once
#include "MenuComponent.h"

class MenuComponent;

class IIterator
{
public:
	IIterator();
	~IIterator();

	virtual bool HasNext() = 0;
	virtual MenuComponent* Next() = 0;
	virtual void Remove() = 0;
};

