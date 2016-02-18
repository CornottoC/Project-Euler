// Euler22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "simpleEuler22.h"
#include <iostream>

int main()
{
	simpleEuler22 e;
	e.readFileAndPopulate("names.txt");
	e.totVecValue();

	char c;
	while (c = getchar())
	{
		if (c == 'q')break;
	}
	return 0;
}
