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
	case Buttons::B:
		BButton = command;
	case Buttons::C:
		CButton = command;
	case Buttons::D:
		DButton = command;
	default:
		break;
	}
}

void JoystickController::Press_A()
{
	std::cout << "Pressed A button..." << std::endl;
	AButton->execute();
}

void JoystickController::Press_B()
{
	std::cout << "Pressed B button..." << std::endl;
	BButton->execute();
}

void JoystickController::Press_C()
{
	std::cout << "Pressed C button..." << std::endl;
	CButton->execute();
}

void JoystickController::Press_D()
{
	std::cout << "Pressed D button..." << std::endl;
	DButton->execute();
}
