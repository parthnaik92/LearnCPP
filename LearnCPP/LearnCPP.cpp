// LearnCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

void printName() {
	std::string choice;
	std::cout << "What do you want to do?" << std::endl << "1. Enter your name" << std::endl << "2. Exit" << std::endl << "Your choice(1 or 2): " << std::endl;
	std::cin >> choice;
	if (choice[0] == '1') {
		std::cout << "Please enter your name: " << std::endl;
		std::string name;
		std::cin >> name;
		int size = name.size();
		std::cout << "Hello, " << name << "! How are you today?" << std::endl;
		std::cout << "The size is " << size << std::endl;
	}
	else if (choice[0] == '2') {
		exit(EXIT_SUCCESS);
	}
	else {
		printName();
	}
}

/*int main()
{
	std::cout << "This is a test program" << std::endl;
	printName();
	return 0;
}*/