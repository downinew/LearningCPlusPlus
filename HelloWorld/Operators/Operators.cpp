// Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <bitset>

int main()
{
	int a = 10;
	int b = 2;

	std::cout << "First Number: " << a << std::endl;
	std::cout << "Second Number: " << b << std::endl;

	std::cout << "----------------" << std::endl;
	std::cout << std::endl;

	//Arithmatic and Assignment Operators

	std::cout << "Addition: " << a + b << std::endl;
	std::cout << "Subtraction: " << a + b << std::endl;
	std::cout << "Multiplication: " << a * b << std::endl;
	std::cout << "Division: " << a / b << std::endl;
	std::cout << "Modular: " << a % b << std::endl;
	std::cout << std::endl;

	std::cout << "Increment First Number: " << ++a << std::endl;
	std::cout << "Decrement First Number: " << --a << std::endl;	
	std::cout << std::endl;
	
	//Relational Operators

	std::cout << "First == Second: " << (a == b) << std::endl;
	std::cout << "First != Second: " << (a != b) << std::endl;
	std::cout << "First < Second: " << (a < b) << std::endl;
	std::cout << "First > Second: " << (a > b) << std::endl;
	std::cout << "First >= Second: " << (a >= b) << std::endl;
	std::cout << "First <= Second: " << (a <= b) << std::endl;
	std::cout << std::endl;

	std::cout << "Flipped with !" << std::endl;
	std::cout << "First == Second: " << !(a == b) << std::endl;
	std::cout << "First != Second: " << !(a != b) << std::endl;
	std::cout << "First < Second: " << !(a < b) << std::endl;
	std::cout << "First > Second: " << !(a > b) << std::endl;
	std::cout << "First >= Second: " << !(a >= b) << std::endl;
	std::cout << "First <= Second: " << !(a <= b) << std::endl;
	std::cout << std::endl;

	//Logical Operators
	/*
		AND Conjunction &&
		OR	Disjunction	||
	*/

	std::cout << "Logical Expressions" << std::endl;
	std::cout << "(!(a <= b) && (a == b)): " << (!(a <= b) && (a == b)) << std::endl;
	std::cout << "((a < b) || (a > b)): " << ((a < b) || (a > b)) << std::endl;
	std::cout << std::endl;

	//Bitwise Operators
	/*
		AND - &
		OR	- |
		NOT - ~
		XOR - ^
		Left Shift	- <<
		Right Shift - >>
	*/
	std::cout << "Bitwise Operators" << std::endl;
	std::bitset<8> x(10);
	std::bitset<8> y(2);
	std::cout << "10 - " << x << std::endl;
	std::cout << "2  - " << y << std::endl;
	std::cout << std::endl;

	std::cout << "&  - " << (x & y) << std::endl;
	std::cout << "|  - " << (x | y) << std::endl;
	std::cout << "~  - " << std::bitset<8> (~10) << std::endl;
	std::cout << "^  - " << (x ^ y) << std::endl;
	std::cout << "<< - " << std::bitset<8> (10 << 2) << std::endl;
	std::cout << ">> - " << std::bitset<8> (10 >> 2) << std::endl;




}
