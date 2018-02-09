#pragma once
#include "IState.h"
#include "GumballMachine.h"

class GumBallMachine;

class WinnerState :
	public IState
{
public:
	static WinnerState* GetInstance();
	virtual ~WinnerState();

	virtual void InsertQuarter(GumBallMachine * Machine) override final;
	virtual void EjectQuarter(GumBallMachine * Machine) override final;
	virtual void TurnCrank(GumBallMachine * Machine) override final;
	virtual void Dispence(GumBallMachine * Machine) override final;
private:
	WinnerState();
	WinnerState(const WinnerState& Copy) = delete;
	WinnerState operator = (const WinnerState&) = delete;
};

