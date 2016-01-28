// Euler16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "simpleEuler16.h"
#include <iostream>

int main()
{

	simpleEuler16 e;
	e.calculateResult();

	char c;
	while (c = getchar())
	{
		if (c == 'q')break;
	}
	return 0;
}