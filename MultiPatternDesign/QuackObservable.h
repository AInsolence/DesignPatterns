#pragma once
#include "IObserverQuackologist.h"
class QuackObservable
{
public:
	QuackObservable();
	virtual ~QuackObservable();

	virtual void RegisterObserver(IObserverQuackologist* observer) = 0;
	virtual void NotifyObservers() = 0;
};

