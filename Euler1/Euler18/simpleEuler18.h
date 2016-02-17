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
	const static int depth = 100;
	int triangle[depth][depth];
	int maxPath = 0;

};

