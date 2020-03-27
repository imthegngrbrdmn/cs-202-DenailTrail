#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character
{
public:
	Character(std::string="The Shadow");
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