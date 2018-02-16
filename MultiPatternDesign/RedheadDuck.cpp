#include "RedheadDuck.h"



RedheadDuck::RedheadDuck()
{
	_Assistant = new ObservableAssistant(this);
}


RedheadDuck::~RedheadDuck()
{
}

void RedheadDuck::Quack()
{
	std::cout << "Quack, quack - I'm a RedheadDuck!\n";
	NotifyObservers();
}

void RedheadDuck::RegisterObserver(IObserverQuackologist * observer)
{
	_Assistant->RegisterObserver(observer);
}

void RedheadDuck::NotifyObservers()
{
	_Assistant->NotifyObservers();
}
