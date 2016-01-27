#include "stdafx.h"
#include "simpleEuler7.h"
#include <iostream>

simpleEuler7::simpleEuler7(int i)
{
	nthPrime = i;
}


simpleEuler7::~simpleEuler7()
{
}

int simpleEuler7::calculatePrimes()
{
	int index = 2;
	int primeIndex = 0;
	std::cout << "Looking for prime nr: " << nthPrime << std::endl;
	while (true)
	{
		primeIndex++;
		for (int i = 2; i <= index/2; i++) {
			if ((index % i == 0)) {
				primeIndex--;
				break;
			}
		}
		if (primeIndex == nthPrime) {
			return index;
		}
		index++;
	}

	return 0;
}
