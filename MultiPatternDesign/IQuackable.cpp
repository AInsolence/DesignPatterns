#include "IQuackable.h"



IQuackable::IQuackable()
{
}


IQuackable::~IQuackable()
{
}

IQuackable* IQuackable::isFlock()
{
	return nullptr;
}

void IQuackable::Add(IQuackable* duck)
{
	if (!isFlock())
	{
		std::cout << "You cannot use this operation only with flocks of ducks!\n";
	}
}
