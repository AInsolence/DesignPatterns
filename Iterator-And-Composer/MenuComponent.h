#pragma once
#include <string>
#include <iostream>
#include "IIterator.h"

class IIterator;

class MenuComponent
{
public:
	MenuComponent();
	virtual ~MenuComponent();
	// Composite element methods
	virtual void Add(MenuComponent*  menuComponent);
	virtual void Remove(MenuComponent* menuComponent);
	virtual MenuComponent* GetChild(int ItemNumber);
	virtual IIterator* createIterator() = 0;
	virtual bool IsCompositeComponent() = 0;
	// Methods for menu Items
	virtual std::string GetName();
	virtual std::string GetDescription();
	virtual double GetPrice();
	virtual bool isVegetarian();
	virtual void Print();
};

