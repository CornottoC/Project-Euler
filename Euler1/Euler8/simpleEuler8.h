#pragma once
#include <string>
#include <iostream>
class simpleEuler8
{
public:
	simpleEuler8();
	~simpleEuler8();
	void readFile(std::string);
	void calculateMax(int);
private:
	std::string theNumber;
	
};

