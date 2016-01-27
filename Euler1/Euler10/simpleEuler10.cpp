#include "stdafx.h"
#include "simpleEuler10.h"
#include <iostream>


simpleEuler10::simpleEuler10(int i)
{
	max = i;
}


simpleEuler10::~simpleEuler10()
{
}
//The brains of the operation
//Uses max as the max value for primes
//Prints the sums of all the primes
void simpleEuler10::calculate()
{

	for (int i = 2; i < max; i++) {
		//add the number to the sum
		sum += i;
		//test if prime by looping through numbers that are atleast half of the value
		for (int test = 2; test <= i / 2; test++) {
			//if NOT prime remove the number from the sum
			if (i%test == 0) {
				sum -= i;
				break;
			}
		}
		if (i % 100000==0)std::cout << "i: " << i << std::endl;
	}
	std::cout << "The sum of primes under: " << max << " is: "<<sum;
}
