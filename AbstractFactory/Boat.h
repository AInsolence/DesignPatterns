#pragma once
#include "ITransport.h"
#include "ITransportPartsAbstractFactory.h"

class Boat :
	public ITransport
{
public:
	Boat(ITransportPartsAbstractFactory*);
	~Boat();
};

