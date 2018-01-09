#include "EnemyFactory.h"


EnemyFactory::EnemyFactory()
{
}


EnemyFactory::~EnemyFactory()
{
}

IEnemyActor* EnemyFactory::CreateEnemy(EnemyType Enemy)
{
	switch (Enemy)
	{
	case EnemyType::Guardian:
		return new Guardian();
	case EnemyType::Boss:
		return new Boss();
	default:
		break;
	}
	return NULL;
}
