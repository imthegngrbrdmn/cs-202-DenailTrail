#include "page_design.h"
#include <iostream>
#include <string>

int startGame();
Character createChar();

int main(int argc, char** argv)
{
	//Player input taken.
	std::string input;
	std::cout << "Welcome to the Denali Trail!\nAre you ready for an adventure?\n(Y/n)";
	std::cin >> input;
	if (input == "y" || input == "Y")
	{
		int distance = startGame();
		std::cout << "\nYou made it: " << distance << " feet down the trail";
	}
	else return 0;
}

//Begins game.
int startGame()
{
	std::string input;
	int distance = 0;
	Character protag = createChar();
	while (distance < 100)
	{
		randomEvent(protag, distance);
		std::cout << "You are " << distance << " feet down the trail\nContinue?\n(Y/n)";
		std::cin >> input;
		if (input == "n" || input == "N") break;
	}
	return distance;
}

//Creates character.
Character createChar()
{
	Character protag;
	std::cout << "\nWhat would you like to name your character? ";
	std::cin >> protag.name;
	protag.health = 100;
	protag.hunger = 0;
	protag.thirst = 0;
	protag.inventory = 0;
	protag.strength = 0;
	return protag;
}
