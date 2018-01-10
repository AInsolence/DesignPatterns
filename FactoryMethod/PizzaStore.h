/*
	Base abstract class for all Pizza stores.
*/
#pragma once
#include "Pizza.h"

class PizzaStore
{
public:
	PizzaStore();
	~PizzaStore();

	Pizza* OrderPizza(PizzaType);
	virtual Pizza* CreatePizza(PizzaType) = 0;
};

