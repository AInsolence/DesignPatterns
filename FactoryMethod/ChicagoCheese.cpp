#include "ChicagoCheese.h"



ChicagoCheese::ChicagoCheese()
{
	Name = "Chicago cheese pizza";
	Dough = "Extra Thik Crust";
	Sauce = "Galbani";
	Toppings.push_back("Olive oil");
	Toppings.push_back("Banger");
}


ChicagoCheese::~ChicagoCheese()
{
}

void ChicagoCheese::Cut()
{
	std::cout << "Cutting the pizza into big square slices" << std::endl;
}
