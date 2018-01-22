#include "TVStyleAdapter.h"



TVStyleAdapter::TVStyleAdapter(DVDPlayer* AdapteeDVD)
{
	DVD = AdapteeDVD;
}


TVStyleAdapter::~TVStyleAdapter()
{
}

void TVStyleAdapter::on() const
{
	DVD->SetCD();
	DVD->StartPlay();
}

void TVStyleAdapter::off() const
{
	DVD->Eject();
	DVD->PowerOff();
}
