#include <iostream>
#include "TeaBeverage.h"
#include "CoffeeBeverage.h"

int main()
{
	CaffeineBeverage* Tea = new TeaBeverage();
	Tea->MakeBeverage();

	CaffeineBeverage* Coffee = new CoffeeBeverage();
	Coffee->MakeBeverage();

	system("pause");
	return 0;
}