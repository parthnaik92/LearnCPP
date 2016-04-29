#include "stdafx.h"
#include <iostream>
#include <string>

void workingWithStrings() {
	//Define different types of string
	char a; //single character
	wchar_t japanese; //wide characters, big enough to hold characters for languages such as japanese
	std::string b; //String
	std::string c = b; //String c with all the characters of string/string literal b
	std::string z(13, 'k'); //The string will be kkkkkkkkkkkkk
	std::string w(4, 'p');

	std::cout << "The string z is " << z << std::endl;
	std::cout << "The addition of the strings is " << z + w << std::endl;
	std::cout << "The size of the string is " << (z + w).size() << std::endl; //Nice!

	//variables can be defined in 3 ways

	//1
	std::string hello = "Hello";

	//2
	std::string stars(100, '*');

	//3
	std::string name;

}

void compareStrings() {

	std::string s1, s2;
	std::cout << "Enter a string: " << std::endl;
	std::cin >> s1;
	std::cout << "Enter another string: " << std::endl;
	std::cin >> s2;

	if (s1.compare(s2) == 0) {
		std::cout << "Both the strings are same." << std::endl;
	}
	else {
		std::cout << "They are not same." << std::endl;
	}
}
/*int main() {
	workingWithStrings();
	compareStrings();
}*/