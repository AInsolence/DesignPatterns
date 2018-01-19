#pragma once
#include "ICommand.h"
#include "ActorHero.h"

class ThrowItemCommand :
	public ICommand
{
public:
	ThrowItemCommand(ActorHero* Hero);
	~ThrowItemCommand();
	void execute() override final;
	void undo() override final;

private:
	ActorHero* Receiver;
	bool UndoStatus;
};

