#include "Facade.h"



Facade::Facade(TV* tv, DVDPlayer* DVD)
{
	_tv = tv;
	_DVD = DVD;
}


Facade::~Facade()
{
}

void Facade::SeeTheFilm()
{
	_tv->on();
	_DVD->SetCD();
	_DVD->StartPlay();
}

void Facade::OffSystem()
{
	_DVD->Eject();
	_DVD->PowerOff();
	_tv->off();
}
