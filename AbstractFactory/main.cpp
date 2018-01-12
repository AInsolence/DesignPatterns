#include <iostream>
#include "ITransport.h"
#include "ITransportPartsAbstractFactory.h"
#include "CarPartsFactory.h"
#include "BoatPartsFactory.h"
#include "Car.h"
#include "Boat.h"

int main()
{
	//CarFactoryCode
	//create car parts factory
	ITransportPartsAbstractFactory* Factory = new CarPartsFactory();
	//create car
	ITransport* MyNewItem = new Car(Factory);
	//check car
	MyNewItem->CheckGear();
	MyNewItem->WashCase();
	MyNewItem->StartEngine();

	//
	std::cout << std::endl;
	//

	//BoatFactoryCode
	//create boat parts factory
	Factory = new BoatPartsFactory();
	//create boat
	MyNewItem = new Boat(Factory);
	//check boat
	MyNewItem->CheckGear();
	MyNewItem->WashCase();
	MyNewItem->StartEngine();


	system("pause");
	return 0;
}