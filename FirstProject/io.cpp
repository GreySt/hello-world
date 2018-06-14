/*
 * io.cpp
 *
 *  Created on: 08.06.2018
 *      Author: trtec
 */

#include <iostream>
#include "constants.h"

int readNumber()
{
	int x;
	std::cout << "Please enter your chosen Number: " << std::endl;
	std::cin >> x;

	return x;
}

void writeAnswer(int result)
{
	std::cout << "The result is: " << result << std::endl;

}


