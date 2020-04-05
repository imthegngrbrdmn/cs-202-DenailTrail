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
	items.push_back(std::make_pair(0,"knife"));
	items.push_back(std::make_pair(1, "candy"));
	items.push_back(std::make_pair(2, "food"));
	items.push_back(std::make_pair(3, "water"));
	items.push_back(std::make_pair(4, "medicine"));
	items.push_back(std::make_pair(5, "bear_spray"));
	items.push_back(std::make_pair(6, "rocks"));
	items.push_back(std::make_pair(7, "notebook"));
	items.push_back(std::make_pair(8, "pen"));
	items.push_back(std::make_pair(9, "empty_bottle"));

	Random::shuffle(items);
	return items[0];
}