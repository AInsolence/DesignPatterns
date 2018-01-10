#include "ChicagoPizzaStore.h"



ChicagoPizzaStore::ChicagoPizzaStore()
{
}


ChicagoPizzaStore::~ChicagoPizzaStore()
{
}

Pizza * ChicagoPizzaStore::CreatePizza(PizzaType PizzaTypes)
{
	switch (PizzaTypes)
	{
	case PizzaType::Cheese:
		return new ChicagoCheese();
	default:
		break;
	}
	return nullptr;
}
