#pragma once
#include <string>

class simpleEuler11
{
public:
	simpleEuler11();
	~simpleEuler11();
	void readFile(std::string);
	void calculateDown();
	void calculateRight();
	void calculateDiagonalRight();
	void calculateDiagonalLeft();
	
private:
	//thefield[row][column]
	int theField[20][20];
	int max = 0;
};

