// Practice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int doubleNumber(int x)
{
	int result = x * 2;

	return result;
}

int main()
{
	using namespace std;
	int x;
	cin >> x;
	cout << doubleNumber(x) << endl;

    return 0;
}


