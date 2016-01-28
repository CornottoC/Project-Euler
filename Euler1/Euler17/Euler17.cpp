// Euler17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "simpleEuler17.h"
#include <iostream>

int main()
{


	simpleEuler17 e;
	e.populateWordAndLength();
	char c;
	while (c = getchar())
	{
		if (c == 'q')break;
	}
	return 0;
}