// Euler8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "simpleEuler8.h"

int main()
{
	simpleEuler8 e;
	e.readFile("test.txt");
	e.calculateMax(13);
	char c;
	while (std::cin >> c)
	{
		if (c == 'q')break;
	}
	return 0;
}