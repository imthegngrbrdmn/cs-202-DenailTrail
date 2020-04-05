#include <iostream>
#include <vector>
#include "page_design.h"

using Random = effolkronium::random_static;

//vector to hold items.
std::vector<int> items;

int knife = 0;
int candy = 1;
int food = 2;
int water = 3;
int medicine = 4;
int bear_spray = 5;
int rocks = 6;
int notebook = 7;
int pen = 8;
int empty_bottle = 9;

//Function to randomise the items found. 
void randomItem(Character& protag)
{
	items.push_back(knife);
	items.push_back(candy);
	items.push_back(food);
	items.push_back(water);
	items.push_back(medicine);
	items.push_back(bear_spray);
	items.push_back(rocks);
	items.push_back(notebook);
	items.push_back(pen);
	items.push_back(empty_bottle);

	Random::shuffle(items);

	if (items[0] == knife)
	{
		protag.setInventory(protag.inventory() + 1);
	}
	else if (items[0] == candy)
	{
		protag.setInventory(protag.inventory() + 1);;
	}
}