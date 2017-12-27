#pragma once
#include "WeaponBehaviour.h"

class KnifeWeapon :
	public WeaponBehaviour
{
public:
	KnifeWeapon();
	~KnifeWeapon();

	void Act();
};

