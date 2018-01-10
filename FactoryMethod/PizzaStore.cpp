#include "PizzaStore.h"



PizzaStore::PizzaStore()
{
}


PizzaStore::~PizzaStore()
{
}

Pizza* PizzaStore::OrderPizza(PizzaType PizzaTypes)
{
	Pizza* NewPizza = CreatePizza(PizzaTypes);
	NewPizza->Prepare();
	NewPizza->Bake();
	NewPizza->Cut();
	NewPizza->Box();

	return NewPizza;
}
