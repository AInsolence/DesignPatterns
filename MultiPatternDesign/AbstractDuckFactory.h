#pragma once
#include "IQuackable.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "Goose.h"
#include "GooseToDuckAdapter.h"

class AbstractDuckFactory
{
public:
	AbstractDuckFactory();
	virtual ~AbstractDuckFactory();

	virtual IQuackable* CreateMallardDuck() = 0;
	virtual IQuackable* CreateRedheadDuck() = 0;
	virtual IQuackable* CreateGooseAsDuck() = 0;
};

