#include "GetItemCommand.h"



GetItemCommand::GetItemCommand(ActorHero* Hero)
{
	Receiver = Hero;
	UndoStatus = false;
}


GetItemCommand::~GetItemCommand()
{
}

void GetItemCommand::execute()
{
	Receiver->PickUpItem();
}

void GetItemCommand::undo()
{
	if (!UndoStatus)
	{
		Receiver->ThrowItem();
		UndoStatus = true;
	}
	else
	{
		Receiver->PickUpItem();
		UndoStatus = false;
	}
}
