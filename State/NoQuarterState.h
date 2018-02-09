#pragma once
#include "IState.h"
#include "GumBallMachine.h"

class GumBallMachine;

class NoQuarterState :
	public IState
{
public:
	static NoQuarterState* GetInstance();
	virtual ~NoQuarterState();

	virtual void InsertQuarter(GumBallMachine* Machine) override final;
	virtual void EjectQuarter(GumBallMachine* Machine) override final;
	virtual void TurnCrank(GumBallMachine* Machine) override final;
	virtual void Dispence(GumBallMachine* Machine) override final;
private:
	NoQuarterState();
	NoQuarterState(const NoQuarterState& Copy) = delete;
	NoQuarterState operator = (const NoQuarterState&) = delete;
};


