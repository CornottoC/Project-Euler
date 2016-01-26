#pragma once
class simpleEuler6
{
public:
	simpleEuler6(int);
	~simpleEuler6();
	unsigned long calculate();
private:
	int limit;
	unsigned long result;
};

