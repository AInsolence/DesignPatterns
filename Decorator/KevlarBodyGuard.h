/*
	Add kevlar body guard armor.
*/
#pragma once
#include "Armor.h"

class KevlarBodyGuard :
	public Armor
{
public:
	KevlarBodyGuard(Armor* PreviousArmor);
	~KevlarBodyGuard();

	int FullArmorValue() const override final;

private:
	int ArmorValue;
	Armor* PreviousArmor;
};

