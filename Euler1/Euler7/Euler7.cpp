// Euler7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "simpleEuler7.h"

int main()
{
	simpleEuler7 e(10001);
	std::cout <<std::endl<<"Found: "<< e.calculatePrimes();
	char c;
	while (std::cin >> c)
	{
		if (c == 'q')break;
	}
    return 0;
}

