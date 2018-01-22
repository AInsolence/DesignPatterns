#pragma once
#include "TV.h"
#include "DVDPlayer.h"

class Facade
{
public:
	Facade(TV* tv, DVDPlayer* DVD);
	~Facade();

	void SeeTheFilm();
	void OffSystem();

private:
	TV* _tv;
	DVDPlayer* _DVD;
};

