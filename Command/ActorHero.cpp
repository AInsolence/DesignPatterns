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
