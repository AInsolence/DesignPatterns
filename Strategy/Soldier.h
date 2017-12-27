#pragma once
#include "IActor.h"
class Soldier :
	public IActor
{
public:
	Soldier(WeaponBehaviour* Weapon, TalkingBehaviour* Talking);
	~Soldier();

	void Display();

};

