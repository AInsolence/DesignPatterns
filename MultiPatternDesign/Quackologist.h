#pragma once
#include "IObserverQuackologist.h"
#include <iostream>

class Quackologist :
	public IObserverQuackologist
{
public:
	Quackologist();
	virtual ~Quackologist();

	virtual void Update(QuackObservable* duck);
};

