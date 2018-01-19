#include "Combo_2.h"



Combo_2::Combo_2(ActorHero* Hero)
{
	Receiver = Hero;
}


Combo_2::~Combo_2()
{
}

void Combo_2::execute()
{
	Receiver->Jump();
	Receiver->Hit();
	Receiver->Hit();
	Receiver->Hit();
	Receiver->Hit();
}
