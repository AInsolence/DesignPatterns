#include <iostream>
#include "ChicagoPizzaStore.h"
#include "NYPizzaStore.h"

int main()
{
	ChicagoPizzaStore Chicago;
	NYPizzaStore NewYork;
	Chicago.OrderPizza(PizzaType::Cheese);
	NewYork.OrderPizza(PizzaType::Cheese);
	
	system("pause");
	return 0;
}