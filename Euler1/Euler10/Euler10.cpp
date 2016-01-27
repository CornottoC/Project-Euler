// Euler10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "simpleEuler10.h"

int main()
{
	//create the class with param for max
	simpleEuler10 e(10);
	e.calculate();
	char c;
	while (std::cin >> c)
	{
		if (c == 'q')break;
	}
	return 0;
}