#pragma once
#include "ICommand.h"
#include"ActorHero.h"

class Combo_2 :
	public ICommand
{
public:
	Combo_2(ActorHero* Hero);
	~Combo_2();

	void execute() override final;
private:
	ActorHero* Receiver;
};

