// Chapter4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <string>

//
//int main()
//{
//	std::cout << "Enter your full name: ";
//	std::string name;
//	std::getline(std::cin, name); // read a full line of text into name
//
//	std::cout << "Enter your age: ";
//	int age; // age needs to be an integer, not a string, so we can do math with it
//	std::cin >> age;
//
//	std::cin.ignore(32767, '\n');
//	int letters = name.length(); // get number of letters in name (including spaces)
//	double agePerLetter = static_cast<double>(age) / letters; // static cast age to double to avoid integer division
//	std::cout << "You've lived " << agePerLetter << " years for each letter in your name.\n";
//
//	std::getchar();
//
//	return 0;
//}

enum MonsterType
{
	Ogre,
	Dragon,
	Orc,
	GiantSpider,
	Slime
};


struct Monster
{
	MonsterType monsterType;
	std::string name;
	int health;
};


void printMonster(Monster monster)
{
	std::string type;
	switch (monster.monsterType)
	{
	case 0:
		type = "Ogre";
		break;
	case 1:
		type = "Dragon";
		break;
	case 2:
		type = "Orc";
		break;
	case 3:
		type = "GiantSpider";
		break;
	case 4:
		type = "Slime";
		break;
	default:
		type = "Unkown";
		break;
	}

	std::cout << "This " << type << " is named " << monster.name << " and has " << monster.health << " health.";
}

int main()
{
	Monster ogre = { Ogre, "Bob", 20 };
	Monster slime = { Slime, "Joe", 25 };

	printMonster(ogre);
	printMonster(slime);

	std::getchar();

	return 0;
}

