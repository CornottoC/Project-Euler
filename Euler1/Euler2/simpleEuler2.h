#pragma once
class simpleEuler2
{
public:
	simpleEuler2();
	simpleEuler2(int);
	~simpleEuler2();
	void calculate();
	unsigned long getResult();
	void setLimit(int);
private:
	void setResult(unsigned long);
	int getLimit();
	unsigned long result;
	int limit;
};

