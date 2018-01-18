#pragma once
#include "ICommand.h"
#include <iostream>

enum class Buttons
{
	A,
	B,
	C,
	D
};

class JoystickController
{
public:
	JoystickController(ICommand* AButton, ICommand* BButton,
							ICommand* CButton, ICommand* DButton);
	~JoystickController();

	ICommand* AButton;
	ICommand* BButton;
	ICommand* CButton;
	ICommand* DButton;

	void SetButton(Buttons button, ICommand* command);
	void PressButton(Buttons button);
};

