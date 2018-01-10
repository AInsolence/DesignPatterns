#pragma once
#include "PizzaStore.h"
#include "ChicagoCheese.h"

class ChicagoPizzaStore :
	public PizzaStore
{
public:
	ChicagoPizzaStore();
	~ChicagoPizzaStore();

	Pizza* CreatePizza(PizzaType) override final;
};

