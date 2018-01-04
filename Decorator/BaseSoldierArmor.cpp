#include "BaseSoldierArmor.h"



BaseSoldierArmor::BaseSoldierArmor()
{
	Description = "Soldier base armor";
	ArmorValue = 1;
}


BaseSoldierArmor::~BaseSoldierArmor()
{
}

int BaseSoldierArmor::FullArmorValue() const
{
	return ArmorValue;
}
