// Conditions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	int a, b;

	std::cout << "Enter a: ";
	std::cin >> a;

	std::cout << "Enter b: ";
	std::cin >> b;
	std::cout << std::endl;

	std::cout << "You entered for a: " << a << std::endl;
	std::cout << "You entered for b: " << b << std::endl;
	std::cout << std::endl;

	if (a > b)
	{
		std::cout << "Case 1: " << std::endl;
		std::cout << a << " > " << b << std::endl;
	}
	else if (a < b)
	{
		std::cout << "Case 2: " << std::endl;
		std::cout << a << " < " << b << std::endl;
	}
	else
	{
		std::cout << "Case 3: " << std::endl;
		std::cout << a << " = " << b << std::endl;
	}

	if (12345)
	{
		std::cout << "Surely, the condition above is not Zero!" << std::endl;
		std::cout << std::endl;
	}

	if (7 < 4 || 0 < 10 && (9 == 9))
	{
		std::cout << "7 < 4 || 0 < 10" << std::endl;
		std::cout << std::endl;
	}

	char c;

	std::cout << "Enter char for c: ";
	std::cin >> c;

	switch (c)
	{
	case 'd':
		std::cout << "Switch Case 1" << std::endl;
		break;
	case 'w':
		std::cout << "Switch Case 2" << std::endl;
		break;
	case 'z':
		std::cout << "Switch Case 3" << std::endl;
		break;
	case 'a':
		std::cout << "Switch Case 4" << std::endl;
		break;
	default:
		std::cout << "Something went very very wrong" << std::endl;
		break;
	}
	std::cout << std::endl;

	std::string message = (a > b) ? "a > b" : "a <= b";
	std::cout << message << std::endl;
	std::cout << std::endl;

	std::cout << ((a > b ? a + 10 : b + 10) + 10) << std::endl;
	std::cout << std::endl;


}

