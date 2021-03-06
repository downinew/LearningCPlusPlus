// Basics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>


int main()
{
	int A = 4;

    std::cout << A << std::endl; 
	std::cout << &A << std::endl;

	A = 10;

	std::cout << A << std::endl;
	std::cout << &A << std::endl;

	std::cout << std::endl;

	int b = 40, c = 100, d = 20;

	std::cout << "b : " << b << " address: " << &b << std::endl;
	std::cout << "c : " << c << " address: " << &c << std::endl;
	std::cout << "d : " << d << " address: " << &d << std::endl;

	std::cout << std::endl;

	short t1 = 1;
	long long t2 = 1;

	std::cout << "t1 short : " << sizeof(t1) << std::endl;
	std::cout << "b int : " << sizeof(b) << std::endl;
	std::cout << "t2 long long : " << sizeof(t2) << std::endl;

	std::cout << std::endl;

	float t3 = 1.0f;
	double t4 = 4.0;

	std::cout << "t3 float : " << sizeof(t3) << std::endl;
	std::cout << "t4 double : " << sizeof(t4) << std::endl;

	std::cout << std::endl;

	char character = 'a';

	std::cout << "character char : " << sizeof(character) << std::endl;

	std::string x1 = "Hello";
	std::string x2 = "World";
	std::string x3 = x1 + " " + x2;

	std::cout << "string " << x3 << " : " << sizeof(x3) << std::endl;

	std::cout << std::endl;
	
	unsigned short u1 = 1;

	std::cout << "u1 Unsigned Short : " << sizeof(u1) << std::endl;

	std::cout << std::endl;

	bool b1 = true;
	std::cout << "b1 bool : " << sizeof(b1) << std::endl;

	std::cout << std::endl;

	const std::string NAME = "ERIC";

	std::cout << NAME << " " << sizeof(NAME) << std::endl;

	std::cout << std::endl;

	int one;

	std::cout << "Please enter a number: "; 

	std::cin >> one; // console input
	std::cout << std::endl;

	std::cout << "variable named one = " << one;
	std::cout << std::endl;

}

