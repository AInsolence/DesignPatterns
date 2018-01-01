/*
	Interface for the main subject.
*/

#pragma once
#include "IObserver.h"

class ISubject
{
public:
	ISubject();
	virtual ~ISubject();

	virtual void RegisterObserver(IObserver* Object) = 0;
	virtual void RemoveObserver(IObserver* Object) = 0;
	virtual void NotifyObservers() const = 0;
};

