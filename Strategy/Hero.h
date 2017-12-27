#pragma once
#include "IActor.h"

class Hero :
	public IActor
{
public:
	Hero(WeaponBehaviour* Weapon, TalkingBehaviour* Talking);
	~Hero();

	void Display();
};

