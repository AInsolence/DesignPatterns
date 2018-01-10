#include "Pizza.h"



Pizza::Pizza()
{
}


Pizza::~Pizza()
{
}

std::string Pizza::GetName()
{
	return Name;
}

void Pizza::Prepare()
{
	std::cout << "Prepare " << Name << "..." << std::endl;
	std::cout << "Tossing dough(" << Dough << ")..." << std::endl;
	std::cout << "Adding sauce(" << Sauce << ")..." << std::endl;
	std::cout << "Adding toppings: " << std::endl;
	for (auto topping : Toppings)
	{
		std::cout << topping << std::endl;
	}
}

void Pizza::Bake()
{
	std::cout << "Bake for 25 min at 350..." << std::endl;
}

void Pizza::Cut()
{
	std::cout << "Cutting the pizza into diagonal slices..." << std::endl;
}

void Pizza::Box()
{
	std::cout << "Place pizza in official pizza store box." << std::endl;
}
