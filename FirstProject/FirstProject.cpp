/*
* FirstProject.cpp
* Created by: rost
* 04.06.2018
* 15:46:38
*/
#include <iostream>

#include "io.h"


bool isPrime(int x)
{

	if(x==1)
		return true;

	if(x==2)
		return true;

	if (x==3)
		return true;

	if (x==5)
		return true;

	if (x==7)
		return true;
	return false;
}

int main()
{
	int x{0};
	std::cout << "Please enter a single digit Integer" << std::endl;
	std::cin >> x;

	bool prime = isPrime(x);

	if (prime ==1)
		std::cout << "The digit is prime" << std::endl;
	else
		std::cout << "The digit is not prime" << std::endl;


	return 0;
}

