#include "DefendCommand.h"



DefendCommand::DefendCommand(ActorHero* Hero)
{
	Receiver = Hero;
}


DefendCommand::~DefendCommand()
{
}

void DefendCommand::execute()
{
	Receiver->Defend();
}
