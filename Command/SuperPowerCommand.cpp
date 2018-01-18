#include "SuperPowerCommand.h"



SuperPowerCommand::SuperPowerCommand(SuperPower* Power)
{
	Receiver = Power;
}


SuperPowerCommand::~SuperPowerCommand()
{
}

void SuperPowerCommand::execute()
{
	Receiver->Hit();
}
