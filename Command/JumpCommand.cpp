#include "JumpCommand.h"



JumpCommand::JumpCommand(ActorHero* Hero)
{
	Receiver = Hero;
}


JumpCommand::~JumpCommand()
{
}

void JumpCommand::execute()
{
	Receiver->Jump();
}
