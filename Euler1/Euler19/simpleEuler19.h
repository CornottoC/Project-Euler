#pragma once
#include "date.h"

class simpleEuler19
{
public:
	simpleEuler19(date, date);
	~simpleEuler19();
	void countFirstSundays();
private:
	date today;
	date end;
	int counter = 0;
};

