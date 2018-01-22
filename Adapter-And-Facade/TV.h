#pragma once
#include <iostream>

class TV
{
public:
	TV();
	virtual ~TV();

	virtual void on() const;
	virtual void off() const;
};

