#pragma once
#include "TV.h"
#include "DVDPlayer.h"

class TVStyleAdapter :
	public TV
{
public:
	TVStyleAdapter(DVDPlayer* AdapteeDVD);
	~TVStyleAdapter();

	void on() const;
	void off() const;

private:
	DVDPlayer* DVD;
};

