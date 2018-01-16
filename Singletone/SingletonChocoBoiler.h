#pragma once
#include <iostream>
// !NOTE: this singleton thread-safe in standards from c++11

class SingletonChocoBoiler
{
public:
	static SingletonChocoBoiler& GetInstance();
	
	bool IsEmpty();
	bool IsBoiled();

	void Fill();
	void Boil();
	void Drain();
	
private:
	SingletonChocoBoiler();
	virtual ~SingletonChocoBoiler();

	SingletonChocoBoiler (const SingletonChocoBoiler& Copy) = delete;
	SingletonChocoBoiler& operator = (const SingletonChocoBoiler& Assign) = delete;

	bool Empty;
	bool Boiled;
};

