#include "character.h"
#include <cmath>

bool Character::removeInventory(int item)
{
	if (checkInventory(item))
	{
		long long bItem = pow(2, item);
		inventory_ = inventory_ ^ bItem;
		return true;
	}
	return false;
}
bool Character::checkInventory(int item)
{
	long long bItem = pow(2, item);
	return (inventory_ & bItem) == bItem;
}