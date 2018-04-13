#pragma once
#include "ICommand.h"
#include "NoCommand.h"
#include <iostream>

enum class Buttons
{
	A,
	B,
	C,
	D,
	LeftShift,
	RightShift,
	Undo
};

class JoystickController
{
	ICommand* AButton;
	ICommand* BButton;
	ICommand* CButton;
	ICommand* DButton;
	ICommand* LeftShift;
	ICommand* RightShift;
	ICommand* UndoButton;

public:
	JoystickController();
	JoystickController(ICommand* AButton, ICommand* BButton,
							ICommand* CButton, ICommand* DButton);
	~JoystickController();

	void SetButton(Buttons button, ICommand* command);
	void PressButton(Buttons button);
};

