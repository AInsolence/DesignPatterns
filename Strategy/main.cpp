#include <iostream>
#include "IActor.h"
#include "Hero.h"
#include "KnifeWeapon.h"
#include "CanNotTalk.h"
#include "PlayerFriend.h"
#include "ShootGun.h"
#include "Soldier.h"

int main()
{
	IActor* MyHero = new Hero(new KnifeWeapon(), new CanNotTalk());
	MyHero->Display();
	MyHero->Fight();
	MyHero->Talk();

	MyHero->SetTalking(new PlayerFriend());
	MyHero->SetWeapon(new ShootGun());

	MyHero->Display();
	MyHero->Fight();
	MyHero->Talk();

	IActor* FirstGuardian = new Soldier(new ShootGun(), new CanNotTalk());
	FirstGuardian->Display();
	FirstGuardian->Fight();
	FirstGuardian->Talk();

	FirstGuardian->SetTalking(new PlayerFriend());
	FirstGuardian->SetWeapon(new KnifeWeapon());

	FirstGuardian->Display();
	FirstGuardian->Fight();
	FirstGuardian->Talk();

	system("pause");
}