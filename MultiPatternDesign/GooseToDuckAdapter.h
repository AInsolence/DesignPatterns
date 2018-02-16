#pragma once
#include "IQuackable.h"
#include "Goose.h"
#include "ObservableAssistant.h"

class GooseToDuckAdapter :
	public IQuackable
{
public:
	GooseToDuckAdapter(Goose* goose);
	virtual ~GooseToDuckAdapter();

	virtual void Quack() override final;
	virtual void RegisterObserver(IObserverQuackologist* observer);
	virtual void NotifyObservers();

private:
	Goose * _Goose;
	QuackObservable * _Assistant;
};

