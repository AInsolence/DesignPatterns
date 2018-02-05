#pragma once
#include "MenuComponent.h"
#include <list>
#include <string>
#include <algorithm>
#include <iostream>

class MenuComposite :
	public MenuComponent
{
public:
	MenuComposite(std::string Name, std::string Description);
	virtual ~MenuComposite();

	virtual void Add(MenuComponent*  menuComponent) override final;
	virtual void Remove(MenuComponent* menuComponent) override final;
	virtual MenuComponent* GetChild(int ItemNumber) override final;
	// Methods for menu Items
	virtual std::string GetName() override final;
	virtual std::string GetDescription() override final;
	virtual void Print() override final;
private:
	std::string _Name;
	std::string _Description;
	std::list<MenuComponent*>* MenuContainer;
};

