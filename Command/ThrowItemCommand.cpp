#include "ThrowItemCommand.h"



ThrowItemCommand::ThrowItemCommand(ActorHero* Hero)
{
	Receiver = Hero;
	UndoStatus = false;
}


ThrowItemCommand::~ThrowItemCommand()
{
}

void ThrowItemCommand::execute()
{
	Receiver->ThrowItem();
}

void ThrowItemCommand::undo()
{
	if (!UndoStatus)
	{
		Receiver->PickUpItem();
		UndoStatus = true;
	}
	else
	{
		Receiver->ThrowItem();
		UndoStatus = false;
	}
}
