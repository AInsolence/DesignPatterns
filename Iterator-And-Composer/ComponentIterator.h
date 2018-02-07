#pragma once
#include "MenuComponent.h"
#include <stack>
#include <vector>

class ComponentIterator :
	public IIterator
{
public:
	ComponentIterator(IIterator* iterator);
	virtual ~ComponentIterator();

	virtual bool HasNext() override final;
	virtual MenuComponent* Next() override final;
	virtual void Remove() override final;

private:
	std::stack<IIterator*> IterContainer;
};

