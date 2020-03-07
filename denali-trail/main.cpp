#include "page_design.h"
#include <iostream>
#include <string>
#include "sl.h"



int startGame();
Character createChar();

int main(int argc, char** argv)
{
	slWindow(400, 400, "Simple SIGIL Example", false);
	slSetFont(slLoadFont("ttf/white_rabbit.ttf"), 24);
	slSetTextAlign(SL_ALIGN_CENTER);
	int tex = slLoadTexture("png/glow.png");

	while (!slShouldClose() && !slGetKey(SL_KEY_ESCAPE))
	{
		// background glow
		slSetForeColor(0.1, 0.9, 0.2, 0.4);
		slSprite(tex, 200, 240, 300, 200);

		// large text and fat line
		slSetForeColor(0.0, 0.8, 0.2, 1.0);
		slSetFontSize(24);
		slText(200, 250, "SIGIL:");
		slRectangleFill(200, 240, 100, 7);

		// smaller subtext
		slSetFontSize(14);
		slText(200, 220, "Sprites, text, sound, input, and more!");
		slLine(48, 210, 352, 210);

		slRender();
	}
	slClose();
	return 0;
	/*std::string input;
	std::cout << "Welcome to the Denali Trail!\nAre you ready for an adventure?\n(Y/n)";
	std::cin >> input;
	if (input == "y" || input == "Y")
	{
		int distance = startGame();
		std::cout << "\nYou made it: " << distance << " feet down the trail";
	}
	else return 0;*/
}
int startGame()
{
	int distance = 0;
	Character protag = createChar();
	while (distance < 100)
	{
		randomEvent(protag, distance);
		std::cout << "You are " << distance << " feet down the trail\n";
	}
	return distance;
}
Character createChar()
{
	Character protag;
	std::cout << "\nWhat would you like to name your character?\t";
	std::cin >> protag.name;
	protag.hunger = 0;
	protag.thirst = 0;
	protag.inventory = 0;
	protag.strength = 0;
	return protag;
}
