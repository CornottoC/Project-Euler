// Euler14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "simpleEuler14.h"
#include <iostream>


int main()
{
	simpleEuler14 e;
	e.calculate();
	char c;
	while (c = getchar())
	{
		if (c == 'q')break;
	}
	return 0;
}