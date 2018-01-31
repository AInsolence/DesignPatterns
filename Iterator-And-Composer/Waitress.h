#pragma once
#include <iostream>
#include "DinerMenuIterator.h"
#include "PancakeMenuIterator.h"
#include "CafeMenuIterator.h"

class Waitress
{
public:
	Waitress(IMenu* PancakeMenu, IMenu* DinerMenu, IMenu* CafeMenu);
	~Waitress();

	void PrintMenu();
	void PrintMenu(IIterator* Iterator);
	void PrintBreakfestMenu();
	void PrintLunchMenu();
	void PrintCafeMenu();
	void PrintVegeterianMenu();
	bool IsItemVegeterian(std::string ItemName);

private:
	IIterator* DinerIter;
	IIterator* PancakeIter;
	IIterator* CafeIter;
};
