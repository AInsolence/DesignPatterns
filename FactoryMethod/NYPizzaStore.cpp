#include "NYPizzaStore.h"



NYPizzaStore::NYPizzaStore()
{
}


NYPizzaStore::~NYPizzaStore()
{
}

Pizza * NYPizzaStore::CreatePizza(PizzaType PizzaTypes)
{
	switch (PizzaTypes)
	{
	case PizzaType::Cheese:
		return new NYStyleCheese;
	case PizzaType::HotAndSpicy:
		return new NYSpicyAndHot;
	default:
		break;
	}
	return nullptr;
}
