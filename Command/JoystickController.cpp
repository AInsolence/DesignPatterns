#include "JoystickController.h"

JoystickController::JoystickController(ICommand * A_Button, ICommand * B_Button,
	ICommand * C_Button, ICommand * D_Button)
{
	AButton = A_Button;
	BButton = B_Button;
	CButton = C_Button;
	DButton = D_Button;
}

JoystickController::~JoystickController()
{
}

void JoystickController::SetButton(Buttons button, ICommand * command)
{
	switch (button)
	{
	case Buttons::A:
		AButton = command;
		break;
	case Buttons::B:
		BButton = command;
		break;
	case Buttons::C:
		CButton = command;
		break;
	case Buttons::D:
		DButton = command;
		break;
	default:
		break;
	}
}

void JoystickController::PressButton(Buttons button)
{
	switch (button)
	{
	case Buttons::A:
		AButton->execute();
		break;
	case Buttons::B:
		BButton->execute();
		break;
	case Buttons::C:
		CButton->execute();
		break;
	case Buttons::D:
		DButton->execute();
		break;
	default:
		break;
	}
}
