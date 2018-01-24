#include <iostream>
#include "DVDPlayer.h"
#include "TV.h"
#include "TVStyleAdapter.h"
#include "Facade.h"

void RemoteControler(TV* Gadget);

int main()
{// create tv and dvd gadgets
	TV* MyTV = new TV();
	DVDPlayer* MyDVD = new DVDPlayer();
	// create adapter for dvd
	TVStyleAdapter* DVDPretendsTV = new TVStyleAdapter(MyDVD);
	// check remote controller for TV
	RemoteControler(MyTV);
	RemoteControler(DVDPretendsTV);

	// create Facade for all gadgets in one
	Facade* facade = new Facade(MyTV, MyDVD);
	facade->SeeTheFilm();
	facade->OffSystem();

	system("pause");
	return 0;
}

void RemoteControler(TV* Gadget)
{
	Gadget->on();
	std::cout << "Now we can see the film!" << std::endl;
	Gadget->off();
}
