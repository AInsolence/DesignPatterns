#pragma once
#include "ICommand.h"
#include "ActorHero.h"

class HitCommand :
	public ICommand
{
public:
	HitCommand(ActorHero* Hero);
	~HitCommand();

	void execute() override final;

private:
	ActorHero* Receiver;
};

