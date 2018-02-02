#include "MenuComponent.h"



MenuComponent::MenuComponent()
{
}


MenuComponent::~MenuComponent()
{
}

void MenuComponent::Add(const MenuComponent * menuComponent)
{
	std::cout << "Unsupported operation for this type of menu component." << std::endl;
}

void MenuComponent::Remove(const MenuComponent * menuComponent)
{
	std::cout << "Unsupported operation for this type of menu component." << std::endl;
}

MenuComponent * MenuComponent::GetChild(int ItemNumber)
{
	std::cout << "Unsupported operation for this type of menu component." << std::endl;
	return nullptr;
}

std::string MenuComponent::GetName()
{
	std::cout << "Unsupported operation for this type of menu component." << std::endl;
	return nullptr;
}

std::string MenuComponent::GetDescription()
{
	std::cout << "Unsupported operation for this type of menu component." << std::endl;
	return nullptr;
}

double MenuComponent::GetPrice()
{
	std::cout << "Unsupported operation for this type of menu component." << std::endl;
	return 0.0;
}

bool MenuComponent::isVegetarian()
{
	std::cout << "Unsupported operation for this type of menu component." << std::endl;
	return false;
}

void MenuComponent::Print()
{
	std::cout << "Unsupported operation for this type of menu component." << std::endl;
}
