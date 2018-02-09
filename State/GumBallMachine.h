#pragma once
#include "SoldState.h"
#include "SoldOutState.h"
#include "HasQuarterState.h"
#include "NoQuarterState.h"
#include "WinnerState.h"

class GumBallMachine
{
public:
	GumBallMachine(int CountBalls);
	virtual ~GumBallMachine();

	IState* GetNoQuarterState();
	IState* GetHasQuarterState();
	IState* GetSoldState();
	IState* GetSoldOutState();
	IState* GetWinnerState();
	int GetCountBalls();

	void SetState(IState* State);
	void InsertQuarter();
	void EjectQuarter();
	void TurnCrank();
	void ReleaseBall();
	void Refill(int GumBalls);

private:
	int _CountBalls;
	IState * _State;
	
	IState* _NoQuarterState;
	IState* _HasQuarterState;
	IState* _SoldState;
	IState* _SoldOutState;
	IState* _WinnerState;
};

