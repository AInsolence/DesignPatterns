#pragma once
#include "AbstractDuckFactory.h"
#include "QuackCounterDecorator.h"

class CountingDuckFactory :
	public AbstractDuckFactory
{
public:
	CountingDuckFactory();
	virtual ~CountingDuckFactory();

	virtual IQuackable* CreateMallardDuck();
	virtual IQuackable* CreateRedheadDuck();
	virtual IQuackable* CreateGooseAsDuck();
};

