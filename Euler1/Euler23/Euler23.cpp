// Euler23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "simpleEuler23.h"

int main()
{
	simpleEuler23 e;

	//std::cout << std::boolalpha << e.isAbundant(348)<<std::endl;
	//std::cout << std::boolalpha << e.isSumOfTwoAbundant(360);
	e.sumOfTheNumbersNotSums();
	char c;
	while (c = getchar())
	{
		if (c == 'q')break;
	}
	return 0;
}
