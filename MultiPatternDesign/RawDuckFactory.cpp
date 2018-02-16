#include "RawDuckFactory.h"



RawDuckFactory::RawDuckFactory()
{
}


RawDuckFactory::~RawDuckFactory()
{
}

IQuackable* RawDuckFactory::CreateMallardDuck()
{
	return new MallardDuck();
}

IQuackable * RawDuckFactory::CreateRedheadDuck()
{
	return new RedheadDuck();
}

IQuackable * RawDuckFactory::CreateGooseAsDuck()
{
	return new GooseToDuckAdapter(new Goose());
}
