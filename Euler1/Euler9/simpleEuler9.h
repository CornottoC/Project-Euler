#pragma once
#include <vector>
class simpleEuler9
{
public:
	simpleEuler9(int);
	~simpleEuler9();
	void calculateResult();
	void calculateTriplets();
private:
	struct triplets
	{
		int a;
		int b;
		int c;
	};
	int magicNumber;
	std::vector<triplets> tVec;

};

