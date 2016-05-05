#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void printOutput(string input) {
	int length;
	length = input.length() + 17 + 8;
	string asterisk(length, '*');
	cout << asterisk << endl;
	cout << "*   Hi, " << input << " how are you?   *" << endl;
	cout << asterisk << endl;
}

int main() {
	string name;
	cout << "Hi, please enter your name: " << endl;
	cin >> name;
	printOutput(name);
}