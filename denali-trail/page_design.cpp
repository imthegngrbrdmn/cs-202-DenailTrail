#include "page_design.h"
#include <vector>
#include <iostream>

using Random=effolkronium::random_static;

void bear(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "You have been attacked by a bear.\t";
	protag.health -= 10;
	distance += 5;
}
void lost(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "You get lost and then eventually find your way.";
	protag.hunger += 10;
	protag.thirst += 10;
	distance += 1;
}

void foundKnife(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "You found a Knife.";
	protag.health += 5;
	distance += 1
}

void illness(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "Developing symptoms of illness, maybe an infection.";
	protag.health -= 5;
	distance += 1;
}



void randomEvent(Character& protag, int& distance)
{
	std::vector<std::string> events;
	events.push_back("bear");
	events.push_back("lost");
	Random::shuffle(events);
	if (events[0] == "bear")
	{
		bear(protag, distance);
	}
	else if (events[0] == "lost")
	{
		lost(protag, distance);
	}
}
