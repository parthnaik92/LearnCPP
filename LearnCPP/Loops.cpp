#include "stdafx.h"
#include <iostream>
#include <ctime>

int main() {

	std::clock_t starttime = clock();

	std::string::size_type number = 1; //shows string size, size_type is unsigned

	while ((clock() / (double)CLOCKS_PER_SEC) < 3) {
		std::cout << "The clock is ticking" << std::endl;
	}

	//The loop keeps running as long as the condition is true

	//The next line will not be executed as long as the condition is true

	//clock() starts when the program starts running. Will return the time value in millisecond. CLOCKS_PER_SEC is the number of executions per second.

	std::cout << "The clock has ended and the time is " << clock()/(double)CLOCKS_PER_SEC<< std::endl;

	std::cout << number << std::endl;

	for (int i = 0; i < CLOCKS_PER_SEC; i++) {
		std::cout << i << std::endl;
	}
	return 0;
}