#pragma once
#include "IState.h"
#include "GumBallMachine.h"

class GumBallMachine;

class HasQuarterState :
	public IState
{
public:
	static HasQuarterState* GetInstance();
	virtual ~HasQuarterState();

	virtual void InsertQuarter(GumBallMachine* Machine) override final;
	virtual void EjectQuarter(GumBallMachine* Machine) override final;
	virtual void TurnCrank(GumBallMachine* Machine) override final;
	virtual void Dispence(GumBallMachine* Machine) override final;

private:
	static int _RandomNumber;
	HasQuarterState();
	HasQuarterState(const HasQuarterState& Copy) = delete;
	HasQuarterState operator = (const HasQuarterState&) = delete;
};

