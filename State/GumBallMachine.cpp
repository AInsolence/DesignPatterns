#include "GumBallMachine.h"


GumBallMachine::GumBallMachine(int CountBalls)
{
	_CountBalls = CountBalls;
	_NoQuarterState = NoQuarterState::GetInstance();
	_HasQuarterState = HasQuarterState::GetInstance();
	_SoldState = SoldState::GetInstance();
	_SoldOutState = SoldOutState::GetInstance();
	_WinnerState = WinnerState::GetInstance();
	if (_CountBalls > 0)
	{
		_State = _NoQuarterState;
	}
	else
	{
		_State = _SoldOutState;
	}	
}


GumBallMachine::~GumBallMachine()
{
	delete _State;
	delete _NoQuarterState;
	delete _HasQuarterState;
	delete _SoldState;
	delete _SoldOutState;
	delete _WinnerState;
}

void GumBallMachine::SetState(IState * State)
{
	_State = State;
}

void GumBallMachine::InsertQuarter()
{
	_State->InsertQuarter(this);
}

void GumBallMachine::EjectQuarter()
{
	_State->EjectQuarter(this);
}

void GumBallMachine::TurnCrank()
{
	_State->TurnCrank(this);
	_State->Dispence(this);
}

void GumBallMachine::ReleaseBall()
{
	std::cout << "A Gumball comes rolling out the slot...\n";
	if (_CountBalls > 0)
	{
		_CountBalls--;
	}
}

void GumBallMachine::Refill(int GumBalls)
{
	_CountBalls += GumBalls;
	if (_CountBalls > 0)
	{
		SetState(this->GetNoQuarterState());
	}
}

IState * GumBallMachine::GetNoQuarterState()
{
	return _NoQuarterState;
}

IState * GumBallMachine::GetHasQuarterState()
{
	return _HasQuarterState;
}

IState * GumBallMachine::GetSoldState()
{
	return _SoldState;
}

IState * GumBallMachine::GetSoldOutState()
{
	return _SoldOutState;
}

IState * GumBallMachine::GetWinnerState()
{
	return _WinnerState;
}

int GumBallMachine::GetCountBalls()
{
	return _CountBalls;
}
