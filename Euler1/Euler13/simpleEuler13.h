#pragma once
#include <string>

class simpleEuler13
{
public:
	simpleEuler13();
	~simpleEuler13();
	void readFile(std::string);
	void pupulateLongArray();
	void calculate();
private:
	unsigned long long digits[100];
	std::string strDigits[100];
};

