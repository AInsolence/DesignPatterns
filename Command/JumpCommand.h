#pragma once
#include "ICommand.h"
#include "ActorHero.h"
class JumpCommand :
	public ICommand
{
public:
	JumpCommand(ActorHero* Hero);
	~JumpCommand();
		
	void execute() override final;

private:
	ActorHero* Receiver;
};

