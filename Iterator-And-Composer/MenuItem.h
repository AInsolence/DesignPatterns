#pragma once
#include "MenuComponent.h"
#include <string>

class MenuItem : public MenuComponent
{
public:
	MenuItem(std::string Name, std::string	Description, bool Vegetarian, double Price);
	~MenuItem();
	virtual std::string GetName() override final;
	virtual std::string GetDescription() override final;
	virtual double GetPrice() override final;
	virtual bool isVegetarian() override final;
	virtual void Print() override final;

private:
	std::string _Name;
	std::string	_Description;
	bool _Vegetarian;
	double	_Price;
};

