#pragma once
#include "IQuackable.h"
#include "ObservableAssistant.h"

class QuackCounterDecorator :
	public IQuackable
{
public:
	QuackCounterDecorator(IQuackable * duck);
	virtual ~QuackCounterDecorator();

	virtual void Quack() override final;
	static void GetQuackCounts();
	virtual void RegisterObserver(IObserverQuackologist* observer);
	virtual void NotifyObservers();

private:
	IQuackable * _Duck;
	static int counter;
};

