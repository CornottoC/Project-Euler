// Euler13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "simpleEuler13.h"
#include <iostream>


int main()
{
	simpleEuler13 e;
	
	e.readFile("data.txt");
	e.pupulateLongArray();
	e.calculate();
	char c;
	while (c = getchar())
	{
		if (c == 'q')break;
	}
	return 0;
}

