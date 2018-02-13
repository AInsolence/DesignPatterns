#pragma once
#include "ITileObject.h"
class Tile :
	public ITileObject
{
public:
	Tile();
	virtual ~Tile();

	virtual void Show() override final;
	virtual void SetRole(Role role) {};
};

