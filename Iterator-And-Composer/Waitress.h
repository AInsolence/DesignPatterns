#pragma once
#include <iostream>
#include "MenuComposite.h"

class Waitress
{
public:
	Waitress(MenuComponent* AllMenus);
	~Waitress();

	void PrintMenu();
	bool IsItemVegeterian(std::string ItemName);

private:
	MenuComponent * _AllMenus;
};
