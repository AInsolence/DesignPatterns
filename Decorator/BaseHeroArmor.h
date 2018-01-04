/*
	Hero base armor.
*/
#pragma once
#include "Armor.h"

class BaseHeroArmor :
	public Armor
{
public:
	BaseHeroArmor();
	~BaseHeroArmor();

	int FullArmorValue() const override final;

private:
	int ArmorValue;
};

