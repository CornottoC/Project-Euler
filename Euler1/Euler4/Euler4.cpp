// Euler4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "simpleEuler4.h"
#include <iostream>

int main()
{
	simpleEuler4 e(999);
	e.calculate();
	char c;
	while (std::cin>>c)
	{

		if (c=='q')
		{
			break;
		}
	}
    return 0;
}

