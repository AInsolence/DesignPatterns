/*
	Create hero actor.
*/
#pragma once
#include <iostream>

class ActorHero
{
public:
	ActorHero();
	~ActorHero();

	void Jump();
	void Hit();
	void Defend();
	void PickUpItem();
	void ThrowItem();
};

