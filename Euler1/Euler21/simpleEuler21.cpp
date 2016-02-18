#include "stdafx.h"
#include "simpleEuler21.h"
#include <iostream>

simpleEuler21::simpleEuler21(int m)
{
	max = m;
}


simpleEuler21::~simpleEuler21()
{
}

void simpleEuler21::calculate()
{
	int temp;
	for (int i = 2; i <= max; i++) {
		if ((sumOfDivisors(sumOfDivisors(i))==i)&&(sumOfDivisors(i)!=i))
		{
			std::cout << i << std::endl;
			sumOfAmicable += i;
		}
	}
	std::cout << "The sum is:"<<sumOfAmicable;
}

int simpleEuler21::sumOfDivisors(int number)
{
	int result = 0;

	for (int i = 1; i < number / 2 + 1; i++) {
		if (number%i == 0) {
			result += i;
		}
	}
	return result;
}
