#include "character.h"
#include <cmath>

bool Character::checkInventory(int item)
{
	long long bItem = pow(2, item);
	return (inventory_ & bItem) == bItem;
}