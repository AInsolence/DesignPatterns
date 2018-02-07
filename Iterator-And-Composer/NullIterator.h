#pragma once
#include "IIterator.h"
#include <iostream>

class NullIterator :
	public IIterator
{
public:
	NullIterator();
	virtual ~NullIterator();

	virtual bool HasNext() override final;
	virtual MenuComponent* Next() override final;
	virtual void Remove() override final;
};

