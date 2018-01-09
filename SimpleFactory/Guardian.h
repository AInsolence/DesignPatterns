#pragma once
#include "IEnemyActor.h"

class Guardian :
	public IEnemyActor
{
public:
	Guardian();
	~Guardian();

	void Display() const override final;
};

