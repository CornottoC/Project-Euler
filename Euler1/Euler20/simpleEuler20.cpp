#include "stdafx.h"
#include "simpleEuler20.h"
#include "InfInt.h"

simpleEuler20::simpleEuler20(int m)
{
	max = m;
}


simpleEuler20::~simpleEuler20()
{
}

void simpleEuler20::calculateFactorial()
{
	InfInt sum = "1";
	for (int i = max; i > 0; i--) {
		sum = sum * i;
	}
	sumOfNumbers(sum.toString());
}

void simpleEuler20::sumOfNumbers(std::string s)
{
	int result = 0;
	for (int i = 0; i < s.length(); i++) {
		result += std::stoi(std::string(1, s[i]));
	}
	std::cout <<"Sum of numbers in: "<< s<<" is: "<<result;
}
