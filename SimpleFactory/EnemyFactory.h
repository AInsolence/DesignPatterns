/*
	Simple factory class with static Create method 
	to create instances of enemies in the game.
*/

#pragma once
#include "IEnemyActor.h"
#include "Guardian.h"
#include "Boss.h"

enum class EnemyType
{
	Guardian,
	Boss
};

class EnemyFactory
{
public:
	EnemyFactory();
	~EnemyFactory();

	static IEnemyActor* CreateEnemy(EnemyType Enemy);
};
