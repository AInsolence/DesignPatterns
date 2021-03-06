#include "Car.h"

Car::Car(ITransportPartsAbstractFactory* Factory)
{
	std::cout << "Hello! I'm a brand new car!" << std::endl;
	// !NOTE: all parts created by Factory is appropriate to each other
	_Engine = Factory->CreateEngine();
	_Gear = Factory->CreateGear();
	_Case = Factory->CreateCase();
}

Car::~Car()
{
}

void Car::GoToGarage()
{
	std::cout << "Enough driving for today. Let's go to the garage." << std::endl;
}
