#include "stdafx.h"
#include "simpleEuler4.h"
#include <string>
#include <iostream>

simpleEuler4::simpleEuler4(int i)
{
	limit = i;
}

simpleEuler4::~simpleEuler4()
{
}

bool simpleEuler4::isPalindrome(int number)
{
	std::string s = std::to_string(number);
	for (int i = 0; i < s.length()/2; i++) {
		if (s[i] != s[s.length() - i-1])return false;
	}
	return true;
}

void simpleEuler4::calculate()
{
	std::cout << "Calculate! ";
	int biggest = 0;
	for (int i = limit; i > 0; i--) {
		for (int j = limit; j > 0; j--) {
			if (isPalindrome(i*j) && ((i*j) > biggest)) {
				biggest = i*j;
			}
		}
	}
	std::cout << biggest;
}
