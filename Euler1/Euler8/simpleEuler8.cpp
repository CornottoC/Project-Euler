#include "stdafx.h"
#include "simpleEuler8.h"
#include <fstream>


simpleEuler8::simpleEuler8()
{
}


simpleEuler8::~simpleEuler8()
{
}

void simpleEuler8::readFile(std::string s)
{
	std::ifstream ist(s);
	char c;
	while (ist.good()) {
		c = ist.get();
		if (c == '\n');
		else
		{
			theNumber += c;
		}
		
		
	}
	std::cout << theNumber;
}

void simpleEuler8::calculateMax(int neightBours)
{
	long long sum=0;
	long long max=0;
	for (int i = 0; i < theNumber.length() - neightBours; i++) {

		for (int inside = i; inside < i + neightBours; inside++) {
			(inside == i) ? sum = std::stoi(std::string(1, theNumber[inside])) : sum *= std::stoi(std::string(1, theNumber[inside]));
		}

		if (sum > max) {
			max = sum;
			std::cout << "Max changed to: " << max << " at: " << i << std::endl;
		}
	}
	std::cout << "Max value is: " << max;
}
