#pragma once
#include "ICommand.h"
#include "ActorHero.h"

class Combo_1 :
	public ICommand
{
public:
	Combo_1(ActorHero* Hero);
	~Combo_1();

	void execute() override final;

private:
	ActorHero* Receiver;
};

