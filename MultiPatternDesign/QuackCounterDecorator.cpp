#include "QuackCounterDecorator.h"

int QuackCounterDecorator::counter = 0;

QuackCounterDecorator::QuackCounterDecorator(IQuackable * duck)
{
	_Duck = duck;
}


QuackCounterDecorator::~QuackCounterDecorator()
{
}

void QuackCounterDecorator::Quack()
{
	counter++;
	_Duck->Quack();
}

void QuackCounterDecorator::GetQuackCounts()
{
	std::cout << counter << " quacks are counted.\n";
}

void QuackCounterDecorator::RegisterObserver(IObserverQuackologist * observer)
{
	_Duck->RegisterObserver(observer);
}

void QuackCounterDecorator::NotifyObservers()
{
	_Duck->NotifyObservers();
}
