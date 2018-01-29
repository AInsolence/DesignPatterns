#pragma once
#include <string>

class MenuItem
{
public:
	MenuItem(std::string Name, std::string	Description, bool Vegetarian, double Price);
	~MenuItem();
	std::string GetName();
	std::string GetDescription();
	double GetPrice();
	bool isVegetarian();

private:
	std::string _Name;
	std::string	_Description;
	bool _Vegetarian;
	double	_Price;
};

