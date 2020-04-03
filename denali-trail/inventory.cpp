#include "character.h"
#include <cmath>
/*
	Inventory items should all be integers from 0-63 
	representing bits of the 64 bit inventory. If a bit
	is flipped to 1, that item is in the inventory, but
	if it is flipped to 0, that item is not in the inventory.
	
	If you add an item that is in the inventory already, or you 
	remove an item that isn't there, the function you called
	returns false. 

	Items are as follows:
	0=
	1=
	...(REBECCA PUT THE ITEMS HERE)
	*/
bool Character::addInventory(int item)
{
	if (!checkInventory(item))
	{
		long long bItem = pow(2, item);
		inventory_ = inventory_ | bItem;
		return true;
	}
	return false;
}
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