#pragma once
#include <string>
#include <iostream>

class MenuComponent
{
public:
	MenuComponent();
	virtual ~MenuComponent();
	// Composite element methods
	virtual void Add(const MenuComponent*  menuComponent );
	virtual void Remove(const MenuComponent* menuComponent);
	virtual MenuComponent* GetChild(int ItemNumber);
	// Methods for menu Items
	virtual std::string GetName();
	virtual std::string GetDescription();
	virtual double GetPrice();
	virtual bool isVegetarian();
	virtual void print();
};

