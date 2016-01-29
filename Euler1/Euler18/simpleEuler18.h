#pragma once
#include <string>
class simpleEuler18
{
public:
	simpleEuler18();
	~simpleEuler18();
	void readFile(std::string);
	int calculateMaxPath(int, int, int);
	int getMaxPath();
private:
	int triangle[15][15];
	int maxPath = 0;
	int depth = 15;
};

