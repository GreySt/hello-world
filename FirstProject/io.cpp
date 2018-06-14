/*
 * io.cpp
 *
 *  Created on: 08.06.2018
 *      Author: trtec
 */

#include "io.h"

#include <iostream>

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


