#include "stdafx.h"
#include <iostream>

int readNumber()
{
	std::cout << "Please input a number: " << std::endl;
	int x;
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "Here is the sum: " << x << std::endl;
}