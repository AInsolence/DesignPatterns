#include <iostream>
#include "ActorHero.h"
#include "SuperPower.h"
#include "ICommand.h"
#include "DefendCommand.h"
#include "HitCommand.h"
#include "JumpCommand.h"
#include "SuperPowerCommand.h"
#include "GetItemCommand.h"
#include "ThrowItemCommand.h"
#include "Combo_1.h"
#include "Combo_2.h"
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
	ICommand* ThrowItem = new ThrowItemCommand(CaptainAmerica);
	ICommand* PickUpItem = new GetItemCommand(CaptainAmerica);
	ICommand* ComboOne = new Combo_1(CaptainAmerica);
	ICommand* ComboTwo = new Combo_2(CaptainAmerica);
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
	Joystick->SetButton(Buttons::C, PickUpItem);
	Joystick->SetButton(Buttons::D, ThrowItem);
	//set shifts
	Joystick->SetButton(Buttons::LeftShift, ComboOne);
	Joystick->SetButton(Buttons::RightShift, ComboTwo);
	// Check the Joystick
	Joystick->PressButton(Buttons::A);
	Joystick->PressButton(Buttons::B);
	Joystick->PressButton(Buttons::C);
	Joystick->PressButton(Buttons::D);
	Joystick->PressButton(Buttons::Undo);
	Joystick->PressButton(Buttons::Undo);
	Joystick->PressButton(Buttons::LeftShift);
	Joystick->PressButton(Buttons::RightShift);

	system("pause");
	return 0;
}