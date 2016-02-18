#pragma once
class simpleEuler21
{
public:
	simpleEuler21(int = 100);
	~simpleEuler21();
	void calculate();
	int sumOfDivisors(int);
private:
	int max;
	int sumOfAmicable=0;
};

