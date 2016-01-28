// Euler11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "simpleEuler11.h"
#include <iostream>


int main()
{
	simpleEuler11 e;
	e.readFile("data.txt");
	e.calculateDiagonalRight();
	e.calculateDiagonalLeft();
	e.calculateRight();
	e.calculateDown();
	char c;
	while (c = getchar())
	{
		if (c == 'q')break;
	}
    return 0;
}

