// Euler20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "simpleEuler20.h"
int main()
{

	simpleEuler20 s(100);
	s.calculateFactorial();
	char c;
	while (c = getchar())
	{
		if (c == 'q')break;
	}
	return 0;
}


