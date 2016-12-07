// Chapter5.cpp : Defines the entry point for the console application.
//


#pragma region Chapter 5.3 Quiz 1


#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;

int calculate(int a, int b, char c)
{

	switch (c)
	{

	case '+':
		return  a + b;
		break;
	case '-':
		return a - b;
		break;
	case '*':
		return a * b;
		break;
	case '/':
		return a / b;
		break;
	case '%':
		return a % b;
		break;
	default:
		cout << "You didn't enter a valid operator" << endl;
		return 0;
		break;
	}
}


int main()
{
	int valuea;
	int valueb;
	char valuec;

	cout << "Please enter the first int" << endl;
	cin >> valuea;
	cout << "Please enter the second int" << endl;
	cin >> valueb;
	cout << "Please enter one of the following +, -, *, /, or %" << endl;
	cin >> valuec;

	int sum = calculate(valuea, valueb, valuec);

	//cout << valuea << " " << valuec << " " << valueb << " is " << calculate(valuea, valueb, valuec);

	cout << "Sum is the following: " << sum << endl;
	std::getchar();

    return 0;
}
#pragma endregion

