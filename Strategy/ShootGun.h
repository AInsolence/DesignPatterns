#pragma once
#include "WeaponBehaviour.h"
class ShootGun :
	public WeaponBehaviour
{
public:
	ShootGun();
	~ShootGun();

	void Act();
};

