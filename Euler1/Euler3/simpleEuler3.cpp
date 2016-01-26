#include "stdafx.h"
#include "simpleEuler3.h"
#include <iostream>
#include <algorithm>


simpleEuler3::simpleEuler3()
{
	simpleEuler3::setNumber(600851475143);
}

simpleEuler3::simpleEuler3(unsigned long long i)
{
	setNumber(i);
}

simpleEuler3::~simpleEuler3()
{
}

void simpleEuler3::calculatePrimes(int amountOfPrimes) {
	for (unsigned long i = 2; i < amountOfPrimes; i++) {
		simpleEuler3::primes.push_back(i);
		for (int j = 2; j <= i/2; j++) {
			if ((i%j==0) && (i != j)) {
				primes.pop_back();
				break;
			}
		}
	}
	std::cout << "Primes calculated to: " << amountOfPrimes << std::endl;
}

void simpleEuler3::printPrimes() {
	for (int i = 0; i < primes.size(); i++) {
		std::cout << " " << primes[i] << " ";
	}
}

void simpleEuler3::calculate() {
	std::cout << "Biggest factor: " << divisionPew(number,0);
}

int simpleEuler3::divisionPew(long long numerator, int primeNumber) {
	if (numerator == primes[primeNumber]) {
		return primes[primeNumber];
	}
	else if (numerator%primes[primeNumber] == 0) {
		simpleEuler3::divisionPew(numerator/primes[primeNumber], primeNumber);
	}
	else
	{
		simpleEuler3::divisionPew(numerator, primeNumber+1);
	}
}

void simpleEuler3::setNumber(unsigned long long i) {
	number = i;
}