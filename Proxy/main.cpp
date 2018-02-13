#include "Tile.h"
#include "TileProxy.h"
#include <iostream>

int main()
{
	ITileObject* TileOnMap = new Tile();
	ITileObject* Tile_Proxy = new TileProxy(TileOnMap, Role::Admin);
	Tile_Proxy->Show();
	//TileProxy* NTile_Proxy = dynamic_cast<TileProxy*>(Tile_Proxy);//
	Tile_Proxy->SetRole(Role::Player);
	Tile_Proxy->Show();


	system("pause");
	return 0;
}