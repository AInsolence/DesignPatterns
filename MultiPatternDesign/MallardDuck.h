#pragma once
#include "IQuackable.h"
#include "ObservableAssistant.h"

class MallardDuck :
	public IQuackable
{
public:
	MallardDuck();
	virtual ~MallardDuck();

	virtual void Quack() override final;
	virtual void RegisterObserver(IObserverQuackologist* observer);
	virtual void NotifyObservers();

private:
	QuackObservable* _Assistant;
};

