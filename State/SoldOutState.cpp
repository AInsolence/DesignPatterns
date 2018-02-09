#include "SoldOutState.h"

SoldOutState* Instance = nullptr;

SoldOutState::SoldOutState()
{
}


SoldOutState * SoldOutState::GetInstance()
{
	if (!Instance)
	{
		Instance = new SoldOutState();
		return Instance;
	}
	return Instance;
}

SoldOutState::~SoldOutState()
{
}

void SoldOutState::InsertQuarter(GumBallMachine* Machine)
{
	std::cout << "SOLD OUT! There is no gumballs!\n";
}

void SoldOutState::EjectQuarter(GumBallMachine* Machine)
{
	std::cout << "SOLD OUT! There is no gumballs!\n";
}

void SoldOutState::TurnCrank(GumBallMachine* Machine)
{
	std::cout << "SOLD OUT! There is no gumballs!\n";
}

void SoldOutState::Dispence(GumBallMachine* Machine)
{
	std::cout << "SOLD OUT! There is no gumballs!\n";
}
