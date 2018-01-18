#include <iostream>
#include "ActorHero.h"
#include "SuperPower.h"
#include "ICommand.h"
#include "DefendCommand.h"
#include "HitCommand.h"
#include "JumpCommand.h"
#include "SuperPowerCommand.h"
#include "JoystickController.h"

int main()
{//init all actors and create joystick(controller)
	ActorHero* CaptainAmerica = new ActorHero();
	SuperPower* NuclearBomb = new SuperPower();
	
	// create commands
	ICommand* Jump = new JumpCommand(CaptainAmerica);
	ICommand* Hit = new HitCommand(CaptainAmerica);
	ICommand* Defend = new DefendCommand(CaptainAmerica);
	ICommand* SuperPower = new SuperPowerCommand(NuclearBomb);
	// create joystick
	JoystickController* Joystick = new JoystickController(Jump, Hit, SuperPower, Defend);
	// Check the Joystick
	Joystick->PressButton(Buttons::A);
	Joystick->PressButton(Buttons::B);
	Joystick->PressButton(Buttons::C);
	Joystick->PressButton(Buttons::D);

	//change all buttons
	Joystick->SetButton(Buttons::A, Hit);
	Joystick->SetButton(Buttons::B, Defend);
	Joystick->SetButton(Buttons::C, Jump);
	Joystick->SetButton(Buttons::D, SuperPower);
	// Check the Joystick
	Joystick->PressButton(Buttons::A);
	Joystick->PressButton(Buttons::B);
	Joystick->PressButton(Buttons::C);
	Joystick->PressButton(Buttons::D);

	system("pause");
	return 0;
}