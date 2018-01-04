#include "Helmet.h"



Helmet::Helmet(Armor* PreviousArmor)
{
	this->PreviousArmor = PreviousArmor;
	Description = PreviousArmor->GetDescription() + " + helmet";

	ArmorValue = 1;
}


Helmet::~Helmet()
{
}

int Helmet::FullArmorValue() const
{
	return PreviousArmor->FullArmorValue() + ArmorValue;
}
