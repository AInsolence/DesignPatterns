#include "NullIterator.h"



NullIterator::NullIterator()
{
}


NullIterator::~NullIterator()
{
}

bool NullIterator::HasNext()
{
	return false;
}

MenuComponent * NullIterator::Next()
{
	return nullptr;
}

void NullIterator::Remove()
{
	std::cout << "Unsupported operation for this type of menu component." << std::endl;
}
