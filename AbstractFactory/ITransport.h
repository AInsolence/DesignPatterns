#pragma once
#include <iostream>
#include "Engine.h"
#include "Gear.h"
#include "Case.h"

class ITransport
{
public:
	ITransport();
	~ITransport();

	virtual void CheckGear();
	virtual void WashCase();
	virtual void StartEngine();

protected:
	Engine* _Engine;
	Gear* _Gear;
	Case* _Case;
};

