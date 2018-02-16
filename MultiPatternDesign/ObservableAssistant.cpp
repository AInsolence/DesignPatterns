#include "ObservableAssistant.h"
#include <iostream>


ObservableAssistant::ObservableAssistant(QuackObservable* duck)
{
	_Duck = duck;
	_Observers = {};
}


ObservableAssistant::~ObservableAssistant()
{
}

void ObservableAssistant::RegisterObserver(IObserverQuackologist * observer)
{
	_Observers.push_back(observer);
}

void ObservableAssistant::NotifyObservers()
{
	if (!_Observers.empty())
	{
		for (auto observer : _Observers)
		{
			observer->Update(_Duck);
		}
	}
}
