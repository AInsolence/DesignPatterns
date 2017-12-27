#include "Hero.h"

Hero::Hero(WeaponBehaviour* NewWeapon, TalkingBehaviour* NewTalking) : IActor(NewWeapon, NewTalking)
{
}


Hero::~Hero()
{
}

void Hero::Display()
{
	std::cout << "Draw Hero here!" << std::endl;
}
