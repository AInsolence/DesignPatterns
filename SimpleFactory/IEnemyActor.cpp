#include "IEnemyActor.h"



IEnemyActor::IEnemyActor()
{
}


IEnemyActor::~IEnemyActor()
{
}

void IEnemyActor::Move()
{
	std::cout << "Move this character!" << std::endl;
}

void IEnemyActor::Fight()
{
	std::cout << "Let's fight hero!" << std::endl;
}
