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
public:
	JoystickController();
	JoystickController(ICommand* AButton, ICommand* BButton,
							ICommand* CButton, ICommand* DButton);
	~JoystickController();

	ICommand* AButton;
	ICommand* BButton;
	ICommand* CButton;
	ICommand* DButton;
	ICommand* LeftShift;
	ICommand* RightShift;
	ICommand* UndoButton;

	void SetButton(Buttons button, ICommand* command);
	void PressButton(Buttons button);
};

