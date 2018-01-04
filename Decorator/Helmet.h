/*
	Add helmet armor.
*/
#pragma once
#include "Armor.h"

class Helmet :
	public Armor
{
public:
	Helmet(Armor* PreviousArmor);
	~Helmet();

	int FullArmorValue() const override final;

private:
	int ArmorValue;
	Armor* PreviousArmor;
};

