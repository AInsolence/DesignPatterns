#pragma once
#include <iostream>
#include "DinerMenuIterator.h"
#include "PancakeMenuIterator.h"

class Waitress
{
public:
	Waitress(IMenu* PancakeMenu, IMenu* DinerMenu);
	~Waitress();

	void PrintMenu();
	void PrintMenu(IIterator* Iterator);
	void PrintBreakfestMenu();
	void PrintLunchMenu();
	void PrintVegeterianMenu();
	bool IsItemVegeterian(std::string ItemName);
private:
	IIterator* DinerIter;
	IIterator* PancakeIter;
};
