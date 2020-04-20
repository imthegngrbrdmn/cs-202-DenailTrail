#include "page_design.h"
#include "Images.h"
#include <vector>
#include <iostream>
#include <ctime>

using Random=effolkronium::random_static;

//Bear attacks player. 
void bear(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "You have been attacked by a bear.\t";
	protag.setHealth(protag.health() - 10);
	protag.setStrength(protag.strength() - 10);
	distance += 5;
}

//Player gets lost.
void lost(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "You get lost for a while and then eventually find your way.";
	protag.setHunger(protag.hunger() + 10);
	protag.setThirst(protag.thirst() + 10);
	protag.setStrength(protag.strength() - 5);
	distance += 1;
}

//Player falls ill. 
void illness(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "Developing symptoms of illness, maybe an infection.";
	protag.setHealth(protag.health() + 5);
	protag.setStrength(protag.strength() - 10);
	distance += 1;
}

//Player attacked by wolf.
void wolf(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "A wolf appears, you run as fast as you can to escape!";
	protag.setHealth(protag.health() - 10);
	protag.setHunger(protag.hunger() + 5);
	protag.setThirst(protag.thirst() + 10);
	protag.setStrength(protag.strength() - 10);
	distance += 5;
}

//Player runs across another person.
void person(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "A person appears. May or may not be a friendly. You run just incase.";
	protag.setThirst(protag.thirst() + 5);
	distance += 5;
}

//Player comes across a shelter.
void shelter(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "You come across a shelter. Let's rest.";
	protag.setHealth(protag.health() + 20);
	protag.setStrength(protag.strength() + 20);
	distance += 0;
}

//Player eats a poison berry.
void poison(Character& protag, int& distance)
{
	system("CLS");
	std::cout << "You found a berry and ate it. It was poisonous.";
	protag.setHunger(protag.hunger() + 5);
	protag.setHealth(protag.health() - 5);
	protag.setStrength(protag.strength() - 5);
	distance += 1;
}

void foundItem(Character& protag, int& distance)
{
	system("CLS");
	std::pair<int,std::string> item = randomItem();
	std::cout << "You found an item:\t"<<item.second;
	if (!protag.addInventory(item.first)) std::cout << "\nYou already have this item";
	distance += 1;
}

//Places all events into a vector and generates one randomly. 
void randomEvent(Character& protag, int& distance)
{
	std::vector<std::string> events;
	events.push_back("foundItem");
	events.push_back("bear");
	events.push_back("lost");
	events.push_back("illness");
	events.push_back("wolf");
	events.push_back("person");
	events.push_back("shelter");
	events.push_back("poison");

	//Shuffles events and chooses one at random.
	Random::shuffle(events);
	if (events[0] == "bear")
	{
		BearImg();
		bear(protag, distance);
	}
	else if (events[0] == "lost")
	{
		lost(protag, distance);
	}
	else if (events[0] == "illness")
	{
		IllnessImg();
		illness(protag, distance);
	}
	else if (events[0] == "wolf")
	{
		WolfImg();
		wolf(protag, distance);
	}
	else if (events[0] == "person")
	{
		personImg();
		person(protag, distance);
	}
	else if (events[0] == "shelter")
	{
		ShelterImg();
		shelter(protag, distance);
	}
	else if (events[0] == "poison")
	{
		PoisonImg();
		poison(protag, distance);
	}
	else if (events[0] == "foundItem")
	{
		foundItem(protag, distance);
	}
}
