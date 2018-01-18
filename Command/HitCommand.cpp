#include "HitCommand.h"



HitCommand::HitCommand(ActorHero* Hero)
{
	Receiver = Hero;
}


HitCommand::~HitCommand()
{
}

void HitCommand::execute()
{
	Receiver->Hit();
}
