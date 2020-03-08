#include "page_design.h"
#include <vector>
#include <iostream>

using Random=effolkronium::random_static;

//Bear attacks player. 
void bear(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "You have been attacked by a bear.\t";
	protag.health -= 10;
	protag.strength -= 10;
	distance += 5;
}

//Player gets lost.
void lost(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "You get lost for a while and then eventually find your way.";
	protag.hunger += 10;
	protag.thirst += 10;
	protag.strength -= 5;
	distance += 1;
}

//Player finds a knife along the route.
void foundKnife(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "You found a Knife.";
	protag.health += 5;
	distance += 1
}

//Player falls ill. 
void illness(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "Developing symptoms of illness, maybe an infection.";
	protag.health -= 5;
	protag.strength -= 10;
	distance += 1;
}

//Player attacked by wolf.
void wolf(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "A wolf appears, you run as fast as you can to escape!";
	protag.health -= 10;
	protag.hunger += 5;
	protag.thirst += 10;
	protag.strength -= 10;
	distance += 5;
}

//Player runs across another person.
void person(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "A person appears. May or may not be a friendly. You run just incase.";
	protag.thirst += 5;
	distance += 5;
}

//Player comes across a shelter.
void shelter(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "You come across a shelter. Let's rest.";
	sleep(2);
	protag.health += 20;
	protag.strength += 20;
	distance += 0;
}

//Player finds some food.
void foundFood(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "You found a cache of food.";
	protag.hunger -= 10;
	protag.health += 5;
	protag.strength += 10;
	distance += 1
}

//Player finds some water.
void foundWater(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "You found a source of water.";
	protag.thirst -= 10;
	protag.health += 5;
	protag.strength += 10;
	distance += 1
}

//
void (Character& protag, int& distance)
{
	system("CLS");
	std::cout << "";
	protag.hunger += 10;
	protag.health += 5;
	distance += 1
}

//Places all events into a vector and generates one randomly. 
void randomEvent(Character& protag, int& distance)
{
	std::vector<std::string> events;
	events.push_back("bear");
	events.push_back("lost");
	events.push_back("foundKnife");
	events.push_back("illness");
	events.push_back("wolf");
	events.push_back("person");
	events.push_back("shelter");
	events.push_back("foundFood");
	events.push_back("foundwater");
	//events.push_back("");

	//Shuffles events and chooses one at random.
	Random::shuffle(events);
	if (events[0] == "bear")
	{
		bear(protag, distance);
	}
	else if (events[1] == "lost")
	{
		lost(protag, distance);
	}
	else if (events[2] == "foundKnife")
	{
		foundKnife(protag, distance);
	}
	else if (events[3] == "illness")
	{
		illness(protag, distance);
	}
	else if (events[4] == "wolf")
	{
		wolf(protag, distance);
	}
	else if (events[5] == "person")
	{
		person(protag, distance);
	}
	else if (events[6] == "shelter")
	{
		shelter(protag, distance);
	}
	else if (events[7] == "foundFood")
	{
		foundFood(protag, distance);
	}
	else if (events[8] == "foundWater")
	{
		foundWater(protag, distance);
	}
	else if (events[9] == "")
	{
		(protag, distance);
	}
}
