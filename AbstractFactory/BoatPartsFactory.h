#pragma once
#include "ITransportPartsAbstractFactory.h"
#include "BoatCase.h"
#include "BoatEngine.h"
#include "BoatGear.h"

class BoatPartsFactory :
	public ITransportPartsAbstractFactory
{
public:
	BoatPartsFactory();
	~BoatPartsFactory();

	virtual Engine* CreateEngine() override final;
	virtual Gear* CreateGear() override final;
	virtual Case* CreateCase() override final;
};

