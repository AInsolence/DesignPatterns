/*
	Interface for the displayed elements.
*/
#pragma once
#include <iostream>

class IDisplayElement
{
public:
	IDisplayElement();
	virtual ~IDisplayElement();

	virtual void Display();
};

