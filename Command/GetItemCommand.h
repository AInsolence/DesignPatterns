#pragma once
#include "ICommand.h"
#include "ActorHero.h"

class GetItemCommand :
	public ICommand
{
public:
	GetItemCommand(ActorHero* Hero);
	~GetItemCommand();
	void execute() override final;
	void undo() override final;

private:
	ActorHero* Receiver;
	bool UndoStatus;
};

