#include "stdafx.h"
#include "simpleEuler12.h"
#include <iostream>
#include <math.h>


simpleEuler12::simpleEuler12()
{
	divisorAmount = 500;
}
simpleEuler12::simpleEuler12(int i)
{
	divisorAmount = i;
}


simpleEuler12::~simpleEuler12()
{
}

void simpleEuler12::calculate()
{
	int temp = 1;
	long long triangle=0;
	for (int i = 0; true; i++ ){
		triangle += i;
		std::cout << "Triangle: " << triangle<<"has dividers:";
		for (int test = 1; test <= std::sqrt(triangle)+1; test++) {
			if (triangle%test == 0) {

				std::cout << test << " ";
				temp++;
			}
		}
		std::cout << std::endl;
		

		if (temp >= divisorAmount) {
			std::cout << "First number with " << divisorAmount << " or more of divisors is: " << triangle;
			return;
		}
		else
		{
			temp = 0;
		}
	}
}
