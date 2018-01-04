#include "Armor.h"



Armor::Armor()
{
	Description = "You must create real description of the item here.";
}


Armor::~Armor()
{
}

std::string Armor::GetDescription() const
{
	return Description;
}
