#include <iostream>
#include "MenuItem.h"
#include "Waitress.h"

int main()
{// Create all menus wrapper
	MenuComponent* AllMenus = new MenuComposite("All menus", "Menus for today!");
	// Create inner menus
	MenuComponent* CafeMenu = new MenuComposite("Cafe menu", "Cafe menu for diner!");
	MenuComponent* DinerMenu = new MenuComposite("Diner menu", "Diner menu for today!");
	MenuComponent* PancakeMenu = new MenuComposite("Pancake menu", "Our menu for breakfest!");
	// Add all elements
	AllMenus->Add(CafeMenu);
	AllMenus->Add(PancakeMenu);
	AllMenus->Add(DinerMenu);
	// Cafe items
	MenuComponent* Burger = new MenuItem("Veggie Burger", "Description", true, 5.99);
	CafeMenu->Add(Burger);
	CafeMenu->Add(new MenuItem("Buritto", "Description", false, 6.99));
	CafeMenu->Add(new MenuItem("Soup of the day", "Description", true, 3.99));
	CafeMenu->Add(new MenuItem("Doner", "Description", false, 5.99));
	// Diner items
	DinerMenu->Add(new MenuItem("Vegetarian BLT", "Description", true, 7.99));
	DinerMenu->Add(new MenuItem("BLT", "Description", false, 7.99));
	DinerMenu->Add(new MenuItem("Soup of the day", "Description", false, 5.99));
	DinerMenu->Add(new MenuItem("Hotdog", "Description", false, 1.99));
	DinerMenu->Add(new MenuItem("Steamed Veggies and Brown Rice", "Description", true, 1.99));
	DinerMenu->Add(new MenuItem("Pasta", "Description", false, 1.99));
	//Pancake items
	PancakeMenu->Add(new MenuItem("K&B's Pancake Breakfast", "Description", true, 3.99));
	PancakeMenu->Add(new MenuItem("Regular Pancake Breakfast", "Description", true, 2.99));
	PancakeMenu->Add(new MenuItem("Blueberry Pancakes", "Description", true, 3.99));
	PancakeMenu->Add(new MenuItem("Waffles", "Description", true, 1.99));
	// Desert menu
	MenuComposite* Desert= new MenuComposite("Desert menu", "Our desert menu!");
	DinerMenu->Add(Desert);
	//Desert items
	Desert->Add(new MenuItem("Ice Cream Banana Republic", "Description", true, 12.99));
	Desert->Add(new MenuItem("Fresh Pineaple Juice", "Description", true, 3.99));
	Desert->Add(new MenuItem("Napoleon", "Description", true, 15.99));
	//

	Waitress* Bonny = new Waitress(AllMenus);
	Bonny->PrintMenu();

	system("pause");
	return 0;
}