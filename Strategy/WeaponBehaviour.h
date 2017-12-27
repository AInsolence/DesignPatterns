/*
	Base class for all weapons.
*/

#pragma once
#include <iostream>

class WeaponBehaviour
{
public:
	WeaponBehaviour();
	virtual ~WeaponBehaviour();

	virtual void Act() = 0;
};

