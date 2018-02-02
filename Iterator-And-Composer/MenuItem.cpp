#include "MenuItem.h"



MenuItem::MenuItem(std::string Name, std::string	Description,
									bool Vegetarian, double Price)
{
	_Name = Name;
	_Description = Description;
	_Price = Price;
	_Vegetarian = Vegetarian;
}


MenuItem::~MenuItem()
{
}

std::string MenuItem::GetName()
{
	return _Name;
}

std::string MenuItem::GetDescription()
{
	return _Description;
}

double MenuItem::GetPrice()
{
	return _Price;
}

bool MenuItem::isVegetarian()
{
	return _Vegetarian;
}

void MenuItem::Print()
{
	if (isVegetarian())
	{
		std::cout << "Vegetarian" << std::endl;
	}
	std::cout << GetName() << std::endl;
	std::cout << GetDescription() << std::endl;
	std::cout << GetPrice() << std::endl;
	std::cout << std::endl;
}
