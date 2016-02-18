// Euler21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "simpleEuler21.h"
int main()
{
	simpleEuler21 s(10000);
	s.calculate();
	char c;
	while (c = getchar())
	{
		if (c == 'q')break;
	}
	return 0;
}