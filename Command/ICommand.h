#pragma once
class ICommand
{
public:
	ICommand();
	~ICommand();

	virtual void execute() = 0;
	virtual void undo();
};

