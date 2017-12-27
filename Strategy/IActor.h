/*
	Base class for all actors in the game
*/

#pragma once
#include "WeaponBehaviour.h"
#include "TalkingBehaviour.h"

class IActor
{
public:
	IActor(WeaponBehaviour* Weapon,	TalkingBehaviour* Talking);
	virtual ~IActor();

	virtual void Display() = 0; //draw actor or animate it on the game canvas
	void Fight();
	void Talk();

	void SetWeapon(WeaponBehaviour* NewWeapon);
	void SetTalking(TalkingBehaviour* NewTalking);

protected:
	WeaponBehaviour* Weapon;
	TalkingBehaviour* Talking;
};

