#pragma once
#include <iostream>

class SingletonRobot
{
public:
	static SingletonRobot* GetInstance();

private:
	SingletonRobot();
	virtual ~SingletonRobot();
	SingletonRobot(const SingletonRobot& Copy) = delete;
	SingletonRobot& operator = (const SingletonRobot&) = delete;
};

SingletonRobot* Instance = 0;