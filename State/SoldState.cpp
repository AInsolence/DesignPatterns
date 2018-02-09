#include "SoldState.h"

SoldState* Instance = nullptr;

SoldState::SoldState()
{
}


SoldState * SoldState::GetInstance()
{
	if (!Instance)
	{
		Instance = new SoldState();
		return Instance;
	}
	return Instance;
}

SoldState::~SoldState()
{
}

void SoldState::InsertQuarter(GumBallMachine* Machine)
{
	std::cout << "Please wait, we already giving a gumball.\n";
}

void SoldState::EjectQuarter(GumBallMachine* Machine)
{
	std::cout << "Please wait, we already giving a gumball.\n";
}

void SoldState::TurnCrank(GumBallMachine* Machine)
{
	std::cout << "Please wait, we already giving a gumball.\n";
}

void SoldState::Dispence(GumBallMachine* Machine)
{
	Machine->ReleaseBall();
	if (Machine->GetCountBalls() > 0)
	{
		Machine->SetState(Machine->GetNoQuarterState());
	}
	else
	{
		Machine->SetState(Machine->GetSoldOutState());
	}
}
