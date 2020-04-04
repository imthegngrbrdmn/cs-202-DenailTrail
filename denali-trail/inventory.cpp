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
	2=
	3=
	4=
	5=
	6=
	7=
	8=
	9=
	10=
	11=
	12=
	13=
	14=
	15=
	16=
	17=
	18=
	19=
	20=
	21=
	22=
	23=
	24=
	25=
	26=
	27=
	28=
	29=
	30=
	31=
	32=
	33=
	34=
	35=
	36=
	37=
	38=
	39=
	40=
	41=
	42=
	43=
	44=
	45=
	46=
	47=
	48=
	49=
	50=
	51=
	52=
	53=
	54=
	55=
	56=
	57=
	58=
	59=
	60=
	61=
	62=
	63=
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