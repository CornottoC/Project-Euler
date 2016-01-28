// Euler15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "simpleEuler15.h"
#include <iostream>
#include "mathEuler15.h"

int main()
{
	simpleEuler15 e(3,3);
	e.recursionBomb(0, 0);
	e.printResult();
	mathEuler15 m;
	m.binominal(40, 20);
	char c;
	while (c = getchar())
	{
		if (c == 'q')break;
	}
	return 0;
}