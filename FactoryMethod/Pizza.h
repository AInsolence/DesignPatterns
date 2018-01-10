/*
	Base abstract class Pizza for all pizza types.
*/
#pragma once
#include <string>
#include <vector>
#include <iostream>

enum class PizzaType
{
	Cheese,
	HotAndSpicy

};

class Pizza
{
public:
	Pizza();
	~Pizza();

	std::string GetName();
	void Prepare();
	virtual void Bake();
	virtual void Cut();
	virtual void Box();

protected:
	std::string Name;
	std::string Dough;
	std::string Sauce;
	std::vector<std::string> Toppings;
};

