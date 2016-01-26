#include "stdafx.h"
#include "simpleEuler5.h"
#include <iostream>

simpleEuler5::simpleEuler5(int i)
{
	limit = i;
}


simpleEuler5::~simpleEuler5()
{
}

int simpleEuler5::calculate()
{

	for (int number = limit; true; number+=limit) {
		for (int i = limit - 1; i > 0; i--) {
			if (number%i != 0) {
				break;
			}
			if (i == 1) {
				return number;
			}
		}
	}
}
