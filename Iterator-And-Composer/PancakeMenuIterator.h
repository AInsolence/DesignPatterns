#pragma once
#include "IIterator.h"
#include "PancakeHouseMenu.h"

class PancakeMenuIterator :
	public IIterator
{
public:
	PancakeMenuIterator(PancakeHouseMenu* PancakeMenu);
	virtual ~PancakeMenuIterator();

	virtual bool HasNext() override final;
	virtual MenuItem* Next() override final;

private:
	std::vector<MenuItem*>* _PancakeMenu;
	int _position;
};
