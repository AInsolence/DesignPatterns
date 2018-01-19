#include "Combo_1.h"



Combo_1::Combo_1(ActorHero* Hero)
{
	Receiver = Hero;
}


Combo_1::~Combo_1()
{
}

void Combo_1::execute()
{
	Receiver->Defend();
	Receiver->Jump();
	Receiver->Hit();
	Receiver->Hit();
}
