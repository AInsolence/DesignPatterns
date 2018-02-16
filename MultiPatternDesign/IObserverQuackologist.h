#pragma once

class QuackObservable;

class IObserverQuackologist
{
public:
	IObserverQuackologist();
	virtual ~IObserverQuackologist();

	virtual void Update(QuackObservable* duck) = 0;
};

