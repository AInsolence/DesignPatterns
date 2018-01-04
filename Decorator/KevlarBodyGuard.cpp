#include "KevlarBodyGuard.h"



KevlarBodyGuard::KevlarBodyGuard(Armor* PreviousArmor)
{
	this->PreviousArmor = PreviousArmor;
	Description = PreviousArmor->GetDescription() + " + kevlar body guard";

	ArmorValue = 3;
}


KevlarBodyGuard::~KevlarBodyGuard()
{
}

int KevlarBodyGuard::FullArmorValue() const
{
	return PreviousArmor->FullArmorValue() + ArmorValue;
}
