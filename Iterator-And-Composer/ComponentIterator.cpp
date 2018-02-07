#include "ComponentIterator.h"



ComponentIterator::ComponentIterator(IIterator* iterator)
{
	IterContainer.push(iterator);
}


ComponentIterator::~ComponentIterator()
{
}

bool ComponentIterator::HasNext()
{
	if (IterContainer.empty())
	{
		return false;
	}
	else
	{
		IIterator* iterator = IterContainer.top();
		if (!iterator->HasNext() )
		{
			IterContainer.pop();
			return HasNext();
		}
		else
		{
			return true;
		}
	}
}

MenuComponent * ComponentIterator::Next()
{
	if (HasNext())
	{
		IIterator* iterator = IterContainer.top();
		MenuComponent* component = iterator->Next();
		if (component->IsCompositeComponent())
		{
			IterContainer.push(component->createIterator());
		}
		return component;
	}
	else
	{
		return nullptr;
	}
}

void ComponentIterator::Remove()
{
	std::cout << "Unsupported operation for this type of menu component." << std::endl;
}
