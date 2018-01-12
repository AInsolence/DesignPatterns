#pragma once
#include "Engine.h"
#include "Gear.h"
#include "Case.h"

class ITransportPartsAbstractFactory
{
public:
	ITransportPartsAbstractFactory();
	~ITransportPartsAbstractFactory();

	virtual Engine* CreateEngine() = 0;
	virtual Gear* CreateGear() = 0;
	virtual Case* CreateCase() = 0;
};

