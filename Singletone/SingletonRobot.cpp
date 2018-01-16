#include "SingletonRobot.h"

SingletonRobot * SingletonRobot::GetInstance()
{
	if (!Instance)
	{//will be initialized only once
		static SingletonRobot* Instance = new SingletonRobot();
		return Instance;
	}
	return Instance;
}

SingletonRobot::SingletonRobot()
{
}


SingletonRobot::~SingletonRobot()
{
}
