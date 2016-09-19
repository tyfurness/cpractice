// 2.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

//bool isEqual(int x, int y)
//{
//	return (x == y);
//}
//int main()
//{
//	using namespace std;
//
//	cout << "Please enter a single digit number." << endl;
//	int x;
//	cin >> x;
//
//	if (isEqual(x, 2) || isEqual(x, 3) || isEqual(x, 5) || isEqual(x, 7))
//	{
//		cout << "The digit is prime" << endl;
//	}
//	else
//	{
//		cout << "The digit is not prime" << endl;
//	}
//    return 0;
//}

// -----------------------------------------

//bool isEqual(char x, char y)
//{
//	return (x == y);
//}
//
//void print(double value)
//{
//	std::cout << "The value is: " << value << std::endl;
//}
//int main()
//{
//	using namespace std;
//	double value1, value2;
//	char character;
//	cout << "Please enter a double value." << endl;
//	cin >> value1;
//	cout << "Please enter a second double value." << endl;
//	cin >> value2;
//	cout << "Enter one of the following: +, -, * or / " << endl;
//	cin >> character;
//
//	if (isEqual(character, '+'))
//	{
//		print(value1 + value2);
//	}
//	else if (isEqual(character, '-'))
//	{
//		print(value1 - value2);
//	}
//	else if (isEqual(character, '*'))
//	{
//		print(value1 * value2);
//	}
//	else if (isEqual(character, '/'))
//	{
//		print(value1 / value2);
//	}
//
//	return 0;
//}

// ----------------------------

#include "constants.h"
double someMath(double initialHeight, int seconds)
{
	double fallen = (gravity_constant * seconds * seconds) / 2;
	double currentHeight = initialHeight - fallen;

	return currentHeight;
}

void print(double height, int seconds)
{
	if (height > 0.0)
	{
		std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
	}
	else
	{
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
	}
}

void calculateHeight(double initialHeight, int seconds)
{
	double height = someMath(initialHeight, seconds);
	print(height, seconds);
}

int main()
{
	using namespace std;

	int value;
	cout << "Enter the initial height of the tower in meters: " << endl;
	cin >> value;

	calculateHeight(value, 0);
	calculateHeight(value, 1);
	calculateHeight(value, 2);
	calculateHeight(value, 3);
	calculateHeight(value, 4);
	calculateHeight(value, 5);
	return 0;
}