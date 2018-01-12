#include "CarPartsFactory.h"



CarPartsFactory::CarPartsFactory()
{
}


CarPartsFactory::~CarPartsFactory()
{
}

Engine* CarPartsFactory::CreateEngine()
{
	Engine* engine = new CarEngine();
	return engine;
}

Gear * CarPartsFactory::CreateGear()
{
	Gear* gear = new CarGear();
	return gear;
}

Case * CarPartsFactory::CreateCase()
{
	Case* CarBody = new CarCase();
	return CarBody;
}
