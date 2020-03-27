#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character
{
public:
	Character();
	~Character();

private:
	std::string name_;
	int thirst_;
	int hunger_;
	int strength_;
	int health_;
	long long inventory_;
};
#endif