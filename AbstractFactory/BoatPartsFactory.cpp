#include "BoatPartsFactory.h"



BoatPartsFactory::BoatPartsFactory()
{
}


BoatPartsFactory::~BoatPartsFactory()
{
}

Engine * BoatPartsFactory::CreateEngine()
{
	Engine* BEngine = new BoatEngine();
	return BEngine;
}

Gear * BoatPartsFactory::CreateGear()
{
	Gear* BGear = new BoatGear();
	return BGear;
}

Case * BoatPartsFactory::CreateCase()
{
	Case* BCase = new BoatCase();
	return BCase;
}
