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
