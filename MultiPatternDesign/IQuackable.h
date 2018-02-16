#pragma once
#include <iostream>
#include "QuackObservable.h"

class IQuackable :
	public QuackObservable
{
public:
	IQuackable();
	virtual ~IQuackable();

	virtual void Quack() = 0;
	virtual IQuackable* isFlock();
	virtual void Add(IQuackable* duck);

	virtual void RegisterObserver(IObserverQuackologist* observer) = 0;
	virtual void NotifyObservers() = 0;
};

