#include "NoQuarterState.h"

NoQuarterState* Instance = nullptr;

NoQuarterState::NoQuarterState()
{
}


NoQuarterState * NoQuarterState::GetInstance()
{
	if (!Instance)
	{//will be initialized only once
		static NoQuarterState* Instance = new NoQuarterState();
		return Instance;
	}
	return Instance;
}

NoQuarterState::~NoQuarterState()
{
}

void NoQuarterState::InsertQuarter(GumBallMachine* Machine)
{
	Machine->SetState(Machine->GetHasQuarterState());
	std::cout << "Thank you! Please turn the crank to take a gum or 'EJECT' to return coin.\n";
}

void NoQuarterState::EjectQuarter(GumBallMachine* Machine)
{
	std::cout << "There is NO quarter in the mashine.\n";
}

void NoQuarterState::TurnCrank(GumBallMachine* Machine)
{
	std::cout << "Please insert a quarter before turning the crank.\n";
}

void NoQuarterState::Dispence(GumBallMachine* Machine)
{
	std::cout << "You need to pay first\n";
}
