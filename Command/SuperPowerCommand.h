#pragma once
#include "ICommand.h"
#include "SuperPower.h"

class SuperPowerCommand :
	public ICommand
{
public:
	SuperPowerCommand(SuperPower* Power);
	~SuperPowerCommand();

	void execute() override final;

private:
	SuperPower* Receiver;

};

