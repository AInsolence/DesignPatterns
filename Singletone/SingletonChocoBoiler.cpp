#include "SingletonChocoBoiler.h"



SingletonChocoBoiler& SingletonChocoBoiler::GetInstance()
{
	static SingletonChocoBoiler InstancePointer;
	return InstancePointer;
}

bool SingletonChocoBoiler::IsEmpty()
{
	return Empty;
}

bool SingletonChocoBoiler::IsBoiled()
{
	return Boiled;
}

void SingletonChocoBoiler::Fill()
{
	if (IsEmpty())
	{
		std::cout << "Filling the boiler with chocolate & milk..." << std::endl;
		Empty = false;
		Boiled = false;
	}
	else
	{
		std::cout << "Boiler is not empty! Please drain it before filling!\n";
	}
}

void SingletonChocoBoiler::Boil()
{
	if (!IsEmpty())
	{
		std::cout << "Boiling the chocolate with milk to 70 degrees..." << std::endl;
		Boiled = true;
	}
	else
	{
		std::cout << "WARNING! Boiler is empty! Please fill it before boiling!\n";
	}
}

void SingletonChocoBoiler::Drain()
{
	if (!IsEmpty() && IsBoiled())
	{
		std::cout << "Draining the chocolate..." << std::endl;
		Empty = true;
		Boiled = false;
	}
	else if (!IsEmpty() && !IsBoiled())
	{
		std::cout << "Boiler is full, but mixture is not boiled yet.";
		std::cout << " Please boil it before draining!" << std::endl;
	}
	else
	{
		std::cout << "Cannot drain, boiler is empty!" << std::endl;
	}
}

SingletonChocoBoiler::SingletonChocoBoiler()
{
	Empty = true;
	Boiled = false;
}


SingletonChocoBoiler::~SingletonChocoBoiler()
{
}
