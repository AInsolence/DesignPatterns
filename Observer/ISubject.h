/*
	Interface for the main subject, provides the possibility of 
	registration and notification of observers.
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

