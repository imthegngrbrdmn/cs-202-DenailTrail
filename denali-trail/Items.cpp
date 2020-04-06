#include <iostream>
#include <vector>
#include <string>
#include "page_design.h"
#include "Items.h"

using Random = effolkronium::random_static;

//vector to hold items.
std::vector<std::pair<int,std::string>> items;

//Function to randomise the items found. 
std::pair<int,std::string> randomItem()
{
	items.push_back(std::make_pair(0, "Knife"));
	items.push_back(std::make_pair(1, "Candy"));
	items.push_back(std::make_pair(2, "Food"));
	items.push_back(std::make_pair(3, "Water"));
	items.push_back(std::make_pair(4, "Medicine"));
	items.push_back(std::make_pair(5, "Bear spray"));
	items.push_back(std::make_pair(6, "Rocks"));
	items.push_back(std::make_pair(7, "Notebook"));
	items.push_back(std::make_pair(8, "Pen"));
	items.push_back(std::make_pair(9, "Empty bottle"));

	Random::shuffle(items);
	return items[0];
}