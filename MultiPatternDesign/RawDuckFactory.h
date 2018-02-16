#pragma once
#include "AbstractDuckFactory.h"

class RawDuckFactory :
	public AbstractDuckFactory
{
public:
	RawDuckFactory();
	virtual ~RawDuckFactory();

	virtual IQuackable* CreateMallardDuck();
	virtual IQuackable* CreateRedheadDuck();
	virtual IQuackable* CreateGooseAsDuck();
};

