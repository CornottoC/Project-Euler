#include "stdafx.h"
#include "simpleEuler19.h"
#include <iostream>

simpleEuler19::simpleEuler19(date s, date e)
{
	today = s;
	end = e;
}


simpleEuler19::~simpleEuler19()
{
}

void simpleEuler19::countFirstSundays()
{
	while (today < end) {
		(today.isSundayFirst()) ? counter++ : 0;
		today = today.getNext();
	}
	std::cout << "Amount of sundays on the first is: " << counter;
}



