#include "HasQuarterState.h"

int HasQuarterState::_RandomNumber = 0;
HasQuarterState* Instance = nullptr;

HasQuarterState::HasQuarterState()
{
}


HasQuarterState * HasQuarterState::GetInstance()
{
	if (!Instance)
	{
		Instance = new HasQuarterState();
		return Instance;
	}
	return Instance;
}

HasQuarterState::~HasQuarterState()
{
}

void HasQuarterState::InsertQuarter(GumBallMachine* Machine)
{
	std::cout << "There is another one quarter inside. Please turn the crunk.\n";
}

void HasQuarterState::EjectQuarter(GumBallMachine* Machine)
{
	Machine->SetState(Machine->GetNoQuarterState());
	std::cout << "Returning the quarter...\n";
}

void HasQuarterState::TurnCrank(GumBallMachine* Machine)
{
	_RandomNumber++;
	if (_RandomNumber == 4 && Machine->GetCountBalls() > 1)
	{
		_RandomNumber = 0;
		Machine->SetState(Machine->GetWinnerState());
	}
	else
	{
		Machine->SetState(Machine->GetSoldState());
		std::cout << "Sold a gumball...\n";
	}
}

void HasQuarterState::Dispence(GumBallMachine* Machine)
{
	std::cout << "No gumball dispenced\n";
}
