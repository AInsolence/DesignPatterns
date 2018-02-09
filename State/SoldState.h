#pragma once
#include "IState.h"
#include "GumBallMachine.h"

class GumBallMachine;

class SoldState :
	public IState
{
public:
	static SoldState* GetInstance();
	virtual ~SoldState();

	virtual void InsertQuarter(GumBallMachine* Machine) override final;
	virtual void EjectQuarter(GumBallMachine* Machine) override final;
	virtual void TurnCrank(GumBallMachine* Machine) override final;
	virtual void Dispence(GumBallMachine* Machine) override final;
private:
	SoldState();
	SoldState(const SoldState& Copy) = delete;
	SoldState operator = (const SoldState&) = delete;
};

