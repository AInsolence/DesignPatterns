#pragma once
#include "ITileObject.h"
class TileProxy :
	public ITileObject
{
public:
	TileProxy(ITileObject* RealTile, Role role);
	virtual ~TileProxy();

	virtual void Show() override final;
	void SetRole(Role role);

private:
	ITileObject * _RealTile;
	Role _role;
};

