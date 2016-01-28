// Euler12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "simpleEuler12.h"
#include <iostream>


int main()
{
	simpleEuler12 e(5);
	e.calculate();
	char c;
	while (c = getchar())
	{
		if (c == 'q')break;
	}
	return 0;
}

