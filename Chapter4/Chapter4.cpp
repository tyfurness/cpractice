// Chapter4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdio>

int main()
{
	std::cout << "Enter your full name: ";
	std::string name;
	std::getline(std::cin, name); // read a full line of text into name

	std::cout << "Enter your age: ";
	int age; // age needs to be an integer, not a string, so we can do math with it
	std::cin >> age;

	std::cin.ignore(32767, '\n');
	int letters = name.length(); // get number of letters in name (including spaces)
	double agePerLetter = static_cast<double>(age) / letters; // static cast age to double to avoid integer division
	std::cout << "You've lived " << agePerLetter << " years for each letter in your name.\n";

	std::getchar();

	return 0;
}


