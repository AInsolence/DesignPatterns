/*
	Soldier base armor.
*/
#pragma once
#include "Armor.h"

class BaseSoldierArmor :
	public Armor
{
public:
	BaseSoldierArmor();
	~BaseSoldierArmor();

	int FullArmorValue() const override final;

private:
	int ArmorValue;
};

