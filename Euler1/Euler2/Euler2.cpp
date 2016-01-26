// Euler2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "simpleEuler2.h"
#include <iostream>


using namespace std;

int main()
{

	simpleEuler2 e;
	e.calculate();
	cout << e.getResult()<<endl;


	char c;
	while (c = getchar())
	{
		if (c == 'q')break;
	}
	return 0;

}

