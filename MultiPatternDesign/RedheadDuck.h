#pragma once
#include "IQuackable.h"
#include "ObservableAssistant.h"

class RedheadDuck :
	public IQuackable
{
public:
	RedheadDuck();
	virtual ~RedheadDuck();

	virtual void Quack() override final;
	virtual void RegisterObserver(IObserverQuackologist* observer);
	virtual void NotifyObservers();

private:
	QuackObservable * _Assistant;
};

