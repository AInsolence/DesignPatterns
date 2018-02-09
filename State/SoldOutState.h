#pragma once
#include "IState.h"
#include "GumBallMachine.h"

class GumBallMachine;

class SoldOutState :
	public IState
{
public:
	static SoldOutState * GetInstance();
	virtual ~SoldOutState();

	virtual void InsertQuarter(GumBallMachine* Machine) override final;
	virtual void EjectQuarter(GumBallMachine* Machine) override final;
	virtual void TurnCrank(GumBallMachine* Machine) override final;
	virtual void Dispence(GumBallMachine* Machine) override final;

private:
	SoldOutState();
	SoldOutState(const SoldOutState& Copy) = delete;
	SoldOutState operator = (const SoldOutState&) = delete;
};

