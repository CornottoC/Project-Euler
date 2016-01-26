// Euler5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "simpleEuler5.h"
int main()
{
	simpleEuler5 e(20);
	std::cout << e.calculate();
	char c;
	while (std::cin>>c)
	{
		if (c == 'q')break;
	}
    return 0;
}

