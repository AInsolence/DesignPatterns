#include "GooseToDuckAdapter.h"



GooseToDuckAdapter::GooseToDuckAdapter(Goose* goose)
{
	_Goose = goose;
	_Assistant = new ObservableAssistant(this);
}


GooseToDuckAdapter::~GooseToDuckAdapter()
{
}

void GooseToDuckAdapter::Quack()
{
	_Goose->Honk();
	NotifyObservers();
}

void GooseToDuckAdapter::RegisterObserver(IObserverQuackologist * observer)
{
	_Assistant->RegisterObserver(observer);
}

void GooseToDuckAdapter::NotifyObservers()
{
	_Assistant->NotifyObservers();
}
