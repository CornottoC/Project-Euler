// Euler17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "simpleEuler17.h"
#include <iostream>

int main()
{


	simpleEuler17 e;
	e.populateWordAndLength();
	std::cout << "length of 99: " << e.underHundred(99) << std::endl;
	std::cout << "length of 115: " << e.overHundred(115) << std::endl;
	std::cout << "length of 342 : " << e.overHundred(342) << std::endl;
	std::cout << "length of 100 : " << e.overHundred(100) << std::endl;
	std::cout << "length of 1-1000: " << e.calculateSum(1000);
	char c;
	while (c = getchar())
	{
		if (c == 'q')break;
	}
	return 0;
}