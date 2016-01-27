#pragma once
class simpleEuler10
{
public:
	simpleEuler10(int);
	~simpleEuler10();
	void calculate();
private:
	int max;
	long long sum = 0;
};

