/*
	Factory create NY style pizza
*/
#pragma once
#include "PizzaStore.h"
#include "NYStyleCheese.h"
#include "NYSpicyAndHot.h"

class NYPizzaStore :
	public PizzaStore
{
public:
	NYPizzaStore();
	~NYPizzaStore();

	Pizza* CreatePizza(PizzaType) override final;
};

