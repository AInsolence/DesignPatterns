#pragma once
#include <iostream>
#include "ITransport.h"
#include "ITransportPartsAbstractFactory.h"
#include "Engine.h"
#include "Case.h"
#include "Gear.h"

class Car :
	public ITransport
{
public:
	Car(ITransportPartsAbstractFactory* Factory);
	~Car();

	void GoToGarage();

};

