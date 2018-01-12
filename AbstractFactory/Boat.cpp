#include "Boat.h"



Boat::Boat(ITransportPartsAbstractFactory* Factory)
{
	std::cout << "Hello! I'm your NEW YAHT! Congratulations!!!" << std::endl;
	_Engine = Factory->CreateEngine();
	_Gear = Factory->CreateGear();
	_Case = Factory->CreateCase();
}


Boat::~Boat()
{
}
