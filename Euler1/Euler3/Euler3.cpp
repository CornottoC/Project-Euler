// Euler3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "simpleEuler3.h"
#include <iostream>


int main()
{
	simpleEuler3 e(600851475143);
	e.calculatePrimes(10000);
	e.calculate();
	char c;
	while (c = getchar())
	{
		if (c == 'q')break;
	}
    return 0;
}

