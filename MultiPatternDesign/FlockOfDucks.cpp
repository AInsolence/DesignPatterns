#include "FlockOfDucks.h"



FlockOfDucks::FlockOfDucks()
{
	_Ducks = {};
}


FlockOfDucks::~FlockOfDucks()
{
}

void FlockOfDucks::Quack()
{
	if (!_Ducks.empty())
	{
		std::cout << "This is a flock of ducks!!!\n";
		for (auto duck : _Ducks)
		{
			duck->Quack();
		}
	}
}

IQuackable * FlockOfDucks::isFlock()
{
	return this;
}

void FlockOfDucks::Add(IQuackable* duck)
{
	_Ducks.push_back(duck);
}

void FlockOfDucks::RegisterObserver(IObserverQuackologist * observer)
{
	if (!_Ducks.empty())
	{
		for (auto duck : _Ducks)
		{
			duck->RegisterObserver(observer);
		}
	}
	
}

void FlockOfDucks::NotifyObservers()
{
	if (!_Ducks.empty())
	{
		for (auto duck : _Ducks)
		{
			std::cout << "Twice&\n";
			duck->NotifyObservers();
		}
	}
}
