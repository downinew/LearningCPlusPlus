// Calculator-Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	double var1, var2;

	start:

	std::cout << "Enter first number: ";
	std::cin >> var1;

	std::cout << "Enter second number: ";
	std::cin >> var2;

	std::cout << std::endl;

	std::cout << "What would you like to do?" << std::endl;
	std::cout << "+ - add" << std::endl;
	std::cout << "- - subtract" << std::endl;
	std::cout << "/ - divide" << std::endl;
	std::cout << "* - multiply" << std::endl;

	std::cout << std::endl;

	char decision;
	std::cout << "Enter Operation: ";
	std::cin >> decision;

	std::cout << std::endl;

	system("cls");

	switch (decision)
	{
	case '+':
		std::cout << var1 << " + " << var2 << " = " << var1 + var2 << std::endl;
		break;
	case '-':
		std::cout << var1 << " - " << var2 << " = " << var1 - var2 << std::endl;
		break;
	case '/':
		if (var2)
			std::cout << var1 << " / " << var2 << " = " << var1 / var2 << std::endl;
		else
			std::cout << "Cannot Divide by Zero" << std::endl;
		break;
	case '*':
		std::cout << var1 << " * " << var2 << " = " << var1 * var2 << std::endl;
		break;
	default:
		std::cout << "Operation not accepted" << std::endl;
	}

	std::cout << "Do you want to continue? (Y/N): ";
	std::cin >> decision;

	if (decision == 'Y' || decision == 'y')
		goto start;


}
