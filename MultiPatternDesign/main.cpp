#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "Goose.h"
#include "GooseToDuckAdapter.h"
#include "QuackCounterDecorator.h"
#include "RawDuckFactory.h"
#include "CountingDuckFactory.h"
#include "FlockOfDucks.h"
#include "Quackologist.h"

void Simulate(IQuackable* Duck);

int main()
{
	IObserverQuackologist* DoctorCooper = new Quackologist();
	IQuackable* MallardOne = new QuackCounterDecorator(new MallardDuck());
	IQuackable* RedheadOne = new QuackCounterDecorator(new RedheadDuck());
	IQuackable* MaybeImADuck = new QuackCounterDecorator(new GooseToDuckAdapter(new Goose()));

	Simulate(MallardOne);
	Simulate(RedheadOne);
	Simulate(MaybeImADuck);

	QuackCounterDecorator::GetQuackCounts();

	std::cout << "################################################\n";

	AbstractDuckFactory* _RawDuckFactory = new RawDuckFactory();
	AbstractDuckFactory* _CountingDuckfactory = new CountingDuckFactory();

	// Raw ducks not counted
	IQuackable* MallardTwo = _RawDuckFactory->CreateMallardDuck();
	IQuackable* RedheadTwo = _RawDuckFactory->CreateRedheadDuck();
	IQuackable* MaybeImADuckTwo = _RawDuckFactory->CreateGooseAsDuck();

	Simulate(MallardTwo);
	Simulate(RedheadTwo);
	Simulate(MaybeImADuckTwo);
	// check quacks
	QuackCounterDecorator::GetQuackCounts();

	// Counting ducks
	IQuackable* MallardThree = _CountingDuckfactory->CreateMallardDuck();
	IQuackable* RedheadThree = _CountingDuckfactory->CreateRedheadDuck();
	IQuackable* MaybeImADuckThree = _CountingDuckfactory->CreateGooseAsDuck();

	Simulate(MallardThree);
	Simulate(RedheadThree);
	Simulate(MaybeImADuckThree);
	// check quacks
	QuackCounterDecorator::GetQuackCounts();

	// create Flock of ducks
	IQuackable* FlockOfMallards = new FlockOfDucks();
	FlockOfMallards->Add(MallardTwo);
	FlockOfMallards->Add(MallardThree);

	Simulate(FlockOfMallards);

	// check quacks
	QuackCounterDecorator::GetQuackCounts();

	// create big float
	IQuackable* Flock = new FlockOfDucks();
	Flock->Add(RedheadThree);
	Flock->Add(MaybeImADuckThree);
	Flock->Add(FlockOfMallards);
	Flock->Add(MaybeImADuck);

	Flock->RegisterObserver(DoctorCooper);

	Simulate(Flock);

	// check quacks
	QuackCounterDecorator::GetQuackCounts();

	system("pause");
	return 0;
}

void Simulate(IQuackable * Duck)
{
	Duck->Quack();
}
