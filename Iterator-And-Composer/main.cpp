#include <iostream>
#include "Waitress.h"

int main()
{
	DinerMenu* Diner = new DinerMenu();
	PancakeHouseMenu* Breakfest = new PancakeHouseMenu();
	Waitress* Bonny = new Waitress(Breakfest, Diner);
	Bonny->PrintMenu();

	system("pause");
	return 0;
}