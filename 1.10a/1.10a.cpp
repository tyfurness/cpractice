// 1.10a.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "io.h"

// Practicing using multiple files and headers.
int main()
{
	using namespace std;
	int value1 = readNumber();
	int value2 = readNumber();
	writeAnswer(value1 + value2);
	return 0;
}

/// Used for just using .cpp and not headers
//int readNumber();
//int writeAnswer(int x);
//
//int main()
//{
//	using namespace std;
//	int value1 = readNumber();
//	int value2 = readNumber();
//	writeAnswer(value1 + value2);
//	return 0;
//}

