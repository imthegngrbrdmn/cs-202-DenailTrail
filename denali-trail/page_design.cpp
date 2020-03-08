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
	std::cout << "You get lost for a while and then eventually find your way.";
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

void wolf(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "A wolf appears, you run as fast as you can to escape!";
	protag.health -= 10;
	protag.hunger += 5;
	protag.thirst += 10;
	distance += 5;
}

void person(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "A person appears. May or may not be a friendly. You run just incase.";
	protag.thirst += 5;
	distance += 5;
}

void shelter(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "You come across a shelter. Let's rest.";
	sleep(2);
	protag.health += 20;
	distance += 0;
}

void foundFood(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "You found a cache of food.";
	protag.hunger -= 10;
	protag.health += 5;
	distance += 1
}

void foundWater(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "You found a source of water.";
	protag.thirst -= 10;
	protag.health += 5;
	distance += 1
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
