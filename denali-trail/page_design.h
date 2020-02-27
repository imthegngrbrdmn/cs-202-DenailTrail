#ifndef PAGE_DESIGN_H
#define PAGE_DESIGN_H

#include <random>
#include <string>
struct Character
{
	std::string name;
	int thirst;
	int hunger;
	int strength;
	long long inventory;
};

void randomEvent(Character& protag, int&distance);
#endif