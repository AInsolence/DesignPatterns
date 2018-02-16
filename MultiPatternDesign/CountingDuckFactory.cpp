#include "CountingDuckFactory.h"



CountingDuckFactory::CountingDuckFactory()
{
}


CountingDuckFactory::~CountingDuckFactory()
{
}

IQuackable * CountingDuckFactory::CreateMallardDuck()
{
	return new QuackCounterDecorator(new MallardDuck());
}

IQuackable * CountingDuckFactory::CreateRedheadDuck()
{
	return new QuackCounterDecorator(new RedheadDuck());
}

IQuackable * CountingDuckFactory::CreateGooseAsDuck()
{
	return new QuackCounterDecorator(new GooseToDuckAdapter(new Goose()));
}
