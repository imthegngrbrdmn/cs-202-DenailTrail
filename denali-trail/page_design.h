#ifndef PAGE_DESIGN_H
#define PAGE_DESIGN_H

#include "random.hpp"
#include "character.h"
#include "Items.h"
#include <string>

class Character
{
public:
	Character(std::string name);
	~Character();
	std::string name();
	void setName(std::string name);
	int thirst();
	void setThirst(int thirst);
	int hunger();
	void setHunger(int hunger);
	int strength();
	void setStrength(int strength);
	int health();
	void setHealth(int hp);

	int inventory();
	void setInventory(int items);

	bool addInventory(int item);
	bool removeInventory(int item);
	bool checkInventory(int item);

	bool alive();
private:
	std::string name_{ "The Shadow" };
	int thirst_{ 0 };
	int hunger_{ 0 };
	int strength_{ 0 };
	int health_{ 100 };
	long long inventory_{ 0 };
};

void randomEvent(Character& protag, int& distance);
#endif
