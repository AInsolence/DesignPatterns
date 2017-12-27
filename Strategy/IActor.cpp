#include "IActor.h"



IActor::IActor(WeaponBehaviour* NewWeapon, TalkingBehaviour* NewTalking)
{
	Weapon = NewWeapon;
	Talking = NewTalking;
}


IActor::~IActor()
{
}

void IActor::SetWeapon(WeaponBehaviour* NewWeapon)
{
	Weapon = NewWeapon;
}

void IActor::SetTalking(TalkingBehaviour* NewTalking)
{
	Talking = NewTalking;
}


void IActor::Fight()
{
	Weapon->Act();
}

void IActor::Talk()
{
	Talking->Act();
}
