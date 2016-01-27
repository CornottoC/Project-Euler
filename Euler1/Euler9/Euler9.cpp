// Euler9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "simpleEuler9.h"

int main()
{
	simpleEuler9 e(1000);
	e.calculateTriplets();
	e.calculateResult();
	char c;
	while (std::cin >> c)
	{
		if (c == 'q')break;
	}
	return 0;
}
