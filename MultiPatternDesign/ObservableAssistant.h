#pragma once
#include "QuackObservable.h"
#include <vector>
#include <algorithm>

class ObservableAssistant :
	public QuackObservable
{
public:
	ObservableAssistant(QuackObservable* duck);
	virtual ~ObservableAssistant();

	virtual void RegisterObserver(IObserverQuackologist* observer);
	virtual void NotifyObservers();

private:
	QuackObservable * _Duck;
	std::vector<IObserverQuackologist*> _Observers;
};

