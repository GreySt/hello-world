/*
* FirstProject.cpp
* Created by: rost
* 04.06.2018
* 15:46:38
*/
#include <iostream>

#include "constants.h"

double getTowerheight()
{
	std::cout << "Please insert the initial Height of your Tower: " << '\n';
	double height;
	std::cin >> height;
	return height;
}


void printHeight(double ballHeight)
{
	if (ballHeight > 0.0)
		std::cout << "the ball is at a Height of: " << ballHeight << "m" << '\n';
	else
		std::cout << "the ball hit the ground" << '\n';

}


double calculateHeight(int t , double towerHeight )
{
	double calculateHeight = (myConstants::gravity * (t * t)) / 2 ;
	double height = towerHeight - calculateHeight;
	return height;

}

void calculateandprintHeight(int t, double towerHeight)
{

	double height = calculateHeight(t , towerHeight);
	printHeight (height);

}

int main()
{
    double towerHeight = getTowerheight();
    calculateandprintHeight (1 , towerHeight);
    calculateandprintHeight (2 , towerHeight);
    calculateandprintHeight (3 , towerHeight);
    calculateandprintHeight (4 , towerHeight);
    calculateandprintHeight (5 , towerHeight);

    return 0;
}

