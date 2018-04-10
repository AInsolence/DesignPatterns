#include <iostream>
#include "ChicagoPizzaStore.h"
#include "NYPizzaStore.h"

int main()
{
	PizzaStore* Chicago = new ChicagoPizzaStore();
	PizzaStore* NewYork = new NYPizzaStore();
	Chicago->OrderPizza(PizzaType::Cheese);
	NewYork->OrderPizza(PizzaType::Cheese);
	
	system("pause");
	return 0;
}