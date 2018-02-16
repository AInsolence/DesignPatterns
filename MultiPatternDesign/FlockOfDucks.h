#pragma once
#include "IQuackable.h"
#include <vector>

class FlockOfDucks :
	public IQuackable
{
public:
	FlockOfDucks();
	virtual ~FlockOfDucks();

	virtual void Quack();
	virtual IQuackable* isFlock();
	virtual void Add(IQuackable* duck);
	virtual void RegisterObserver(IObserverQuackologist* observer);
	virtual void NotifyObservers();

private:
	std::vector<IQuackable*> _Ducks;
};

