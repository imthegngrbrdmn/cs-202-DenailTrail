#include <iostream>
#include <string>
#include <vector>


std::vector<std::string> items;

std::string knife = "Knife";
std::string candy = "Candy";
std::string food = "Food";
std::string water = "Water";
std::string medicine = "Medicine";
std::string bear_spray = "Bear Spray";
std::string rocks = "Rocks";
std::string notebook = "Notebook";
std::string pen = "Pen";
std::string empty_bottle = "Empty Bottle";

void randomItem()
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
}