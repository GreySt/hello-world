/*
* FirstProject.cpp
* Created by: rost
* 04.06.2018
* 15:46:38
*/
#include <iostream>

#include "constants.h"

double getHeight()
{
	std::cout << "Please insert the initial Height of your Tower:dasfaf " << '\n';
	double height;
	std::cin >> height;
	return height;
}


double calculateHeight(int t)
{
	double calculateHeight= myConstants::gravity * t * t / 2 ;

	return calculateHeight;
}
int main()
{
    double height = getHeight();

    std::cout << height - calculateHeight(1) << '\n';
    std::cout << height - calculateHeight(2) << '\n';
    std::cout << height - calculateHeight(3) << '\n';
    std::cout << height - calculateHeight(4) << '\n';
    std::cout << height - calculateHeight(5) << '\n';

    return 0;
}

