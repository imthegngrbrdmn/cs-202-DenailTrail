#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character
{
public:
	Character(std::string="The Shadow");
	~Character();
	std::string name();
	std::string setName();
	int thirst();
	void setThirst();
	int hunger();
	void setHunger();
	int strength();
	void setStrength();
	int health();
	void setHealth();
	// a lot more has to be incorporated before inventory, so just don't use it for now.
private:
	std::string name_{ "The Shadow" };
	int thirst_{ 0 };
	int hunger_{ 0 };
	int strength_{ 0 };
	int health_{ 100 };
	long long inventory_{ 0 };
};
#endif