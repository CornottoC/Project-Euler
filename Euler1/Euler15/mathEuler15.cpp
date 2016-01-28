#include "stdafx.h"
#include "mathEuler15.h"
#include <iostream>

mathEuler15::mathEuler15()
{

}


mathEuler15::~mathEuler15()
{
}

void mathEuler15::binominal(int n, int k)
{
	double sum = 1;
	for (double i = 1; i <= k; i++) {
		sum = sum * ((n + 1 - i) / i);
		std::cout << i << " "<< ((n + 1 - i) / i)<< std::endl;
	}
	std::cout<<std::fixed <<"Binominal result: "<< sum;
}
