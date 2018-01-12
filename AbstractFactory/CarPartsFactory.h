#pragma once
#include "ITransportPartsAbstractFactory.h"
#include "CarEngine.h"
#include "CarGear.h"
#include "CarCase.h"

class CarPartsFactory :
	public ITransportPartsAbstractFactory
{
public:
	CarPartsFactory();
	~CarPartsFactory();

	virtual Engine* CreateEngine() override final;
	virtual Gear* CreateGear() override final;
	virtual Case* CreateCase() override final;
};

