#include "stdafx.h"
#include "simpleEuler6.h"
#include <iostream>

simpleEuler6::simpleEuler6(int i)
{
	limit = i;
}


simpleEuler6::~simpleEuler6()
{
}

unsigned long simpleEuler6::calculate()
{
	unsigned long tmpSum1 = 0;
	unsigned long tmpSum2 = 0;

	for (int i = 0; i <= limit; i++) {
		tmpSum1 += i*i;
	}
	for (int i = 0; i <= limit; i++) {
		tmpSum2 += i;
	}
	
	tmpSum2 *= tmpSum2;
	std::cout << "Individually squared: " << tmpSum1 << " added then squared: " << tmpSum2<<std::endl;
	

	return tmpSum2 - tmpSum1;
}

