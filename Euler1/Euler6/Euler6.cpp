// Euler6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "simpleEuler6.h"

int main()
{
	simpleEuler6 e(100);
	std::cout << e.calculate();
	char c;
	while (std::cin >> c)
	{
		if (c == 'q')break;
	}
	return 0;
}

