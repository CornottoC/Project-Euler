#pragma once
#include <string>
class smartEuler18
{
public:
	smartEuler18();
	~smartEuler18();
	void readFile(std::string);
	int calculateMaxPath();
private:
	const static int depth = 100;
	int triangle[depth][depth];
	int maxPath = 0;

};

