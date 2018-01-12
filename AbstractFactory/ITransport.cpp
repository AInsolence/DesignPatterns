#include "ITransport.h"



ITransport::ITransport()
{
}


ITransport::~ITransport()
{
}

void ITransport::CheckGear()
{
	_Gear->CheckStatus();
	std::cout << "All gears are checked. Transport ready to the next step..." << std::endl;
}

void ITransport::WashCase()
{
	std::cout << "Next step started..." << std::endl;
	_Case->Wash();
}

void ITransport::StartEngine()
{
	_Engine->FillWithFuel();
	std::cout << "Starting engine... " << std::endl;
}
