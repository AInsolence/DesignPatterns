#pragma once
#include "ICommand.h"
#include "ActorHero.h"

class DefendCommand :
	public ICommand
{
public:
	DefendCommand(ActorHero* Hero);
	~DefendCommand();

	void execute() override final;

private:
	ActorHero* Receiver;
};

