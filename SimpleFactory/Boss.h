#pragma once
#include "IEnemyActor.h"
class Boss :
	public IEnemyActor
{
public:
	Boss();
	~Boss();

	void Display() const override final;
};

