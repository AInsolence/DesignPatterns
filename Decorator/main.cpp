#include <iostream>
#include "BaseHeroArmor.h"
#include "BaseSoldierArmor.h"
#include "Helmet.h"
#include "KevlarBodyGuard.h"

int main()
{//create hero + helmet
	Armor* HeroArmor = new BaseHeroArmor();
	Armor* helmet = new Helmet(HeroArmor);
	std::cout << helmet->GetDescription() << std::endl;
	std::cout << helmet->FullArmorValue() << std::endl;
	// create soldier with kevlar
	BaseSoldierArmor SoldierArmor;
	Armor* Kevlar = new KevlarBodyGuard (&SoldierArmor);
	std::cout << Kevlar->GetDescription() << std::endl;
	std::cout << Kevlar->FullArmorValue() << std::endl;
	// add a helmet to existing soldier+kevlar
	Armor* SoldierHelmet = new Helmet (Kevlar);
	std::cout << SoldierHelmet->GetDescription() << std::endl;
	std::cout << SoldierHelmet->FullArmorValue() << std::endl;
	// create new soldier + kevlar + two helmets
	Armor* NewSoldier = new Helmet(new Helmet(new KevlarBodyGuard(new BaseSoldierArmor())));
	std::cout << NewSoldier->GetDescription() << std::endl;
	std::cout << NewSoldier->FullArmorValue() << std::endl;

	system("pause");
	return 0;
}