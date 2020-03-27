#include "character.h"

Character::Character(std::string="The Shadow")
{
}

Character::~Character()
{
}

std::string Character::name()
{
	return name_;
}

int Character::thirst()
{
	return thirst_;
}

int Character::hunger()
{
	return hunger_;
}

int Character::strength()
{
	return strength_;
}

int Character::health()
{
	return health_;
}
