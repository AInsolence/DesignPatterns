#pragma once
#include <iostream>

class GumBallMachine;

class IState
{
public:
	IState();
	virtual ~IState();

	virtual void InsertQuarter(GumBallMachine* Machine) = 0;
	virtual void EjectQuarter(GumBallMachine* Machine) = 0;
	virtual void TurnCrank(GumBallMachine* Machine) = 0;
	virtual void Dispence(GumBallMachine* Machine) = 0;
};
