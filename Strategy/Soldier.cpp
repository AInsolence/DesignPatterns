#include "Soldier.h"



Soldier::Soldier(WeaponBehaviour* NewWeapon, TalkingBehaviour* NewTalking) : IActor(NewWeapon, NewTalking)
{
}


Soldier::~Soldier()
{
}

void Soldier::Display()
{
	std::cout << "The Soldier draw here!" << std::endl;
}
