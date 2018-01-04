/*
	Base Abstract class for character armor.
*/
#pragma once
#include <string>

class Armor
{
public:
	Armor();
	virtual ~Armor();
	std::string GetDescription() const;
	virtual int FullArmorValue() const = 0;

protected:
	std::string Description;
};

