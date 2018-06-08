/*
* FirstProject.cpp
* Created by: rost
* 04.06.2018
* 15:46:38
*/
#include <iostream>
#include "firstproject.h"

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

int main()
{
	int firstNumber = 0;
	int secondNumber = 0;
	int result = 0;

	firstNumber= readNumber();
	secondNumber = readNumber();

	result = firstNumber + secondNumber;

	writeAnswer(result);

	return 0;
}

