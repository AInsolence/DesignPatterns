/*
	Interface for an enemy objects in the game.
*/

#pragma once
#include <iostream>

class IEnemyActor
{
public:
	IEnemyActor();
	virtual ~IEnemyActor();

	void Move();
	void Fight();
	virtual void Display() const = 0;
};

