#include <iostream>
#include "EnemyFactory.h"
#include "IEnemyActor.h"

int main()
{
	IEnemyActor* EnemyPtr = EnemyFactory::CreateEnemy(EnemyType::Guardian);
	EnemyPtr->Display();
	EnemyPtr = EnemyFactory::CreateEnemy(EnemyType::Boss);
	EnemyPtr->Display();
	system("pause");
	return 0;
}