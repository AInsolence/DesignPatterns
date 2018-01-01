/*
	Interface for the observers of the main subject.
*/

#pragma once
#include <string>

class IObserver
{
public:
	IObserver();
	virtual ~IObserver();
	virtual void Update() = 0;
};

