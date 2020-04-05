#include "character.h"

Character::Character(std::string name)
{
	name_=name;
}

Character::~Character()
{
}

std::string Character::name()
{
	return name_;
}

void Character::setName(std::string name)
{
	name_ == name;
}

int Character::thirst()
{
	return thirst_;
}

void Character::setThirst(int thirst)
{
	thirst_ = thirst;
}

int Character::hunger()
{
	return hunger_;
}

void Character::setHunger(int hunger)
{
	hunger_ = hunger;
}

int Character::strength()
{
	return strength_;
}

void Character::setStrength(int strength)
{
	strength_ = strength;
}

int Character::health()
{
	return health_;
}

void Character::setHealth(int hp)
{
	health_ = hp;
}

int Character::inventory()
{
	return inventory_;
}

void Character::setInventory(int items)
{
	inventory_ = items;
}