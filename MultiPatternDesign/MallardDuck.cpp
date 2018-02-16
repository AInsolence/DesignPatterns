#include "MallardDuck.h"



MallardDuck::MallardDuck()
{
	 _Assistant = new ObservableAssistant(this);
}


MallardDuck::~MallardDuck()
{
}

void MallardDuck::Quack()
{
	std::cout << "Quack, quack - I'm a MallardDuck!\n";
	NotifyObservers();
}

void MallardDuck::RegisterObserver(IObserverQuackologist * observer)
{
	_Assistant->RegisterObserver(observer);
}

void MallardDuck::NotifyObservers()
{
	_Assistant->NotifyObservers();
}
