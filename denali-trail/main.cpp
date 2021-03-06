#include "page_design.h"
#include "Items.h"
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
		std::cout << "\nYou made it: " << distance << " feet down the trail\n";
		if (distance >= 154176)
		{
			std::cout<<"You have completed the Denali Trail!\n";
		}
	}
	else return 0;
}

//Begins game.
int startGame()
{
	std::string input;
	int distance = 0;
	Character protag = createChar();

	while (distance < 154176)	//actual length of Kesugi Ridge
	{
		randomEvent(protag, distance);
		std::cout << "\nYou are " << distance << " feet down the trail\nContinue?\n(Y/n)";
		std::cin >> input;
		if (input == "n" || input == "N") break;
	}
	return distance;
}

//Creates character.
Character createChar()
{
	std::string name;
	std::cout << "\nWhat would you like to name your character? ";
	std::cin >> name;
	Character protag(name);
	return protag;
}
