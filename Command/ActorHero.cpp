#include "ActorHero.h"



ActorHero::ActorHero()
{
}


ActorHero::~ActorHero()
{
}

void ActorHero::Jump()
{
	std::cout << "Hero jump..." << std::endl;
}

void ActorHero::Hit()
{
	std::cout << "Hit the enemy..." << std::endl;
}

void ActorHero::Defend()
{
	std::cout << "Set the block..." << std::endl;
}

void ActorHero::PickUpItem()
{
	std::cout << "I take it with me.(Get the item)" << std::endl;
}

void ActorHero::ThrowItem()
{
	std::cout << "It will not be useful to me anymore.(Throw the item)" << std::endl;
}
