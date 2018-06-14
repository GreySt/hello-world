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
	  std::cout << "bool:\t\t" << sizeof(bool) << " bytes" << std::endl;
	    std::cout << "char:\t\t" << sizeof(char) << " bytes" << std::endl;
	    std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << std::endl;
	    std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << std::endl; // C++11, may not be supported by your compiler
	    std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << std::endl; // C++11, may not be supported by your compiler
	    std::cout << "short:\t\t" << sizeof(short) << " bytes" << std::endl;
	    std::cout << "int:\t\t" << sizeof(int) << " bytes" << std::endl;
	    std::cout << "long:\t\t" << sizeof(long) << " bytes" << std::endl;
	    std::cout << "long long:\t" << sizeof(long long) << " bytes" << std::endl; // C++11, may not be supported by your compiler
	    std::cout << "float:\t\t" << sizeof(float) << " bytes" << std::endl;
	    std::cout << "double:\t\t" << sizeof(double) << " bytes" << std::endl;
	    std::cout << "long double:\t" << sizeof(long double) << " bytes" << std::endl;
	return 0;
}

