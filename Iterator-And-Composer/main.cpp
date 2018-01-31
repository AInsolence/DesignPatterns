#include <iostream>
#include "Waitress.h"

int main()
{
	DinerMenu* Diner = new DinerMenu();
	PancakeHouseMenu* Breakfest = new PancakeHouseMenu();
	CafeMenu* Cafe = new CafeMenu();
	Waitress* Bonny = new Waitress(Breakfest, Diner, Cafe);
	Bonny->PrintMenu();

	system("pause");
	return 0;
}