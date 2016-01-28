#pragma once
class simpleEuler15
{
public:
	simpleEuler15();
	simpleEuler15(int,int);
	~simpleEuler15();
	void recursionBomb(int, int);
	void printResult();

private:
	int counter=0;
	int maxRow;
	int maxColumn;
};

