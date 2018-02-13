#include "TileProxy.h"



TileProxy::TileProxy(ITileObject* RealTile, Role role)
{
	_RealTile = RealTile;
	_role = role;
}


TileProxy::~TileProxy()
{
}

void TileProxy::Show()
{
	switch (_role)
	{
	case Role::Admin:
		_RealTile->Show();
		break;
	case Role::Player:
		std::cout << "Here only FOG OF WAR...\n";
		break;
	default:
		break;
	}
}

void TileProxy::SetRole(Role role)
{
	_role = role;
	return;
}
