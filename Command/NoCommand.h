/*
	Class to substitute real commands
*/
#pragma once
#include "ICommand.h"

class NoCommand :
	public ICommand
{
public:
	NoCommand();
	~NoCommand();

	void execute() override final;
};

