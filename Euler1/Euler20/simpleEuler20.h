#pragma once
#include <string>
class simpleEuler20
{
public:
	simpleEuler20(int m = 10);
	~simpleEuler20();
	void calculateFactorial();
	void sumOfNumbers(std::string);
private:
	int max;
};

