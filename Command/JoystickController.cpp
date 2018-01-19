#include "JoystickController.h"

JoystickController::JoystickController()
{
	AButton = new NoCommand();
	BButton = new NoCommand();
	CButton = new NoCommand();
	DButton = new NoCommand();
	UndoButton = new NoCommand();
	LeftShift = new NoCommand();
	RightShift = new NoCommand();
}

JoystickController::JoystickController(ICommand * A_Button, ICommand * B_Button,
	ICommand * C_Button, ICommand * D_Button)
{
	AButton = A_Button;
	BButton = B_Button;
	CButton = C_Button;
	DButton = D_Button;
	UndoButton = new NoCommand();
	LeftShift = new NoCommand();
	RightShift = new NoCommand();
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
	case Buttons::LeftShift:
		LeftShift = command;
		break;
	case Buttons::RightShift:
		RightShift = command;
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
		UndoButton = AButton;
		break;
	case Buttons::B:
		BButton->execute();
		UndoButton = BButton;
		break;
	case Buttons::C:
		CButton->execute();
		UndoButton = CButton;
		break;
	case Buttons::D:
		DButton->execute();
		UndoButton = DButton;
		break;
	case Buttons::LeftShift:
		LeftShift->execute();
		UndoButton = LeftShift;
		break;
	case Buttons::RightShift:
		RightShift->execute();
		UndoButton = RightShift;
		break;
	case Buttons::Undo:
		UndoButton->undo();
		break;
	default:
		break;
	}
}
