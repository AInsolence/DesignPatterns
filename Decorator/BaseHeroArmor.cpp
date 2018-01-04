#include "BaseHeroArmor.h"



BaseHeroArmor::BaseHeroArmor()
{
	Description = "Hero base armor";
	ArmorValue = 3;
}


BaseHeroArmor::~BaseHeroArmor()
{
}

int BaseHeroArmor::FullArmorValue() const
{
	return ArmorValue;
}
