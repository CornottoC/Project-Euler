// Euler19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "date.h"
#include "simpleEuler19.h"
#include <iostream>
int main()
{
	

	date startdate(1,1,1900,1);
	date enddate(31,12,2000);

	simpleEuler19 s(startdate, enddate);
	s.countFirstSundays();
	char c;
	while (c = getchar())
	{
		if (c == 'q')break;
	}
    return 0;
}

