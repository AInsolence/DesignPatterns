#pragma once
#include <iostream>

enum class Role
{
	Admin,
	Player
};

class ITileObject
{
public:
	ITileObject();
	virtual ~ITileObject();

	virtual void Show() = 0;
	virtual void SetRole(Role role) = 0;
};

