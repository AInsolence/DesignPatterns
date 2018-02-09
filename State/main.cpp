#include "GumBallMachine.h"

int main()
{
	GumBallMachine* Machine = new GumBallMachine(10);

	Machine->InsertQuarter();
	Machine->EjectQuarter();
	Machine->EjectQuarter();
	Machine->TurnCrank();
	Machine->InsertQuarter();
	Machine->EjectQuarter();
	Machine->EjectQuarter();
	Machine->InsertQuarter();
	Machine->TurnCrank();
	Machine->InsertQuarter();
	Machine->TurnCrank();
	Machine->InsertQuarter();
	Machine->TurnCrank();
	Machine->InsertQuarter();
	Machine->TurnCrank();


	system("pause");
	return 0;
}