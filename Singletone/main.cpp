#include <iostream>
#include "SingletonChocoBoiler.h"

int main(int argc, char *argv[])
{
	SingletonChocoBoiler& Boiler = SingletonChocoBoiler::GetInstance();
	Boiler.Fill();
	Boiler.Boil();
	Boiler.Drain();

	Boiler.Boil();
	Boiler.Drain();
	system("pause");
	return 0;
}