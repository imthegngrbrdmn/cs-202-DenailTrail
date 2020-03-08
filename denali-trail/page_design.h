#ifndef PAGE_DESIGN_H
#define PAGE_DESIGN_H

#include "random.hpp"
#include <string>

//Struct to hold player variables.
struct Character
{
	std::string name;
	int thirst;
	int hunger;
	int strength;
	int health;
	long long inventory;
};

void randomEvent(Character& protag, int&distance);
#endif