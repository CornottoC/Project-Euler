#pragma once
#include <vector>
class simpleEuler3
{
public:
	simpleEuler3();
	simpleEuler3(unsigned long long i);
	~simpleEuler3();
	void calculate();
	void calculatePrimes(int);
	void printPrimes();
	void setNumber(unsigned long long);
	int divisionPew(long long, int);
private:
	unsigned long long number;
	std::vector<unsigned int> primes;
};

