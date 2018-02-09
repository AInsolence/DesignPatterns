#include "WinnerState.h"

WinnerState* Instance = nullptr;

WinnerState::WinnerState()
{
}


WinnerState * WinnerState::GetInstance()
{
	if (!Instance)
	{
		Instance = new WinnerState();
		return Instance;
	}
	return Instance;
}

WinnerState::~WinnerState()
{
}

void WinnerState::InsertQuarter(GumBallMachine * Machine)
{
	std::cout << "Please wait, we already giving a gumball.\n";
}

void WinnerState::EjectQuarter(GumBallMachine * Machine)
{
	std::cout << "Please wait, we already giving a gumball.\n";
}

void WinnerState::TurnCrank(GumBallMachine * Machine)
{
	std::cout << "Please wait, we already giving a gumball.\n";
}

void WinnerState::Dispence(GumBallMachine * Machine)
{
	Machine->ReleaseBall();
	if (Machine->GetCountBalls() > 0)
	{
		std::cout << "You are the winner! Take your second gumball!\n";
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
	else
	{
		Machine->SetState(Machine->GetSoldOutState());
	}
}
