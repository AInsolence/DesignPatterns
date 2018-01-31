#pragma once
#include "IIterator.h"
#include "CafeMenu.h"
#include <iostream>
#include <map>

class CafeMenuIterator :
	public IIterator
{
public:
	CafeMenuIterator(std::map<std::string, MenuItem*>* CafeMenu);
	~CafeMenuIterator();

	virtual MenuItem* Next() override final;
	virtual bool HasNext() override final;
	virtual void Remove() override final;

private:
	std::map<std::string, MenuItem*>* _CafeMenu;
	std::map<std::string, MenuItem*>::iterator map_iterator;
};

