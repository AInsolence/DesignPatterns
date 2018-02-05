#include "MenuComposite.h"



MenuComposite::MenuComposite(std::string Name, std::string Description)
{
	_Name = Name;
	_Description = Description;
}


MenuComposite::~MenuComposite()
{
}

void MenuComposite::Add(MenuComponent * menuComponent)
{
	MenuContainer.emplace_back(menuComponent);
}

void MenuComposite::Remove(MenuComponent * menuComponent)
{
	//MenuContainer->erase(std::remove(MenuContainer->begin(), MenuContainer->end(),
		//menuComponent), MenuContainer->end());
}

MenuComponent* MenuComposite::GetChild(int ItemNumber)
{
	return nullptr;
}

std::string MenuComposite::GetName()
{
	return _Name;
}

std::string MenuComposite::GetDescription()
{
	return _Description;
}

void MenuComposite::Print()
{
	std::cout << std::endl << "***" << _Name << "***" << std::endl;
	std::cout << "\nDescription: " << _Description << std::endl << std::endl;
	for (auto item : MenuContainer)
	{
		item->Print();
	}
}
