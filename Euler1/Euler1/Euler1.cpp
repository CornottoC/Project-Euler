// Euler1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "euler1Simple.h"
#include <iostream>

using namespace std;

int main()
{
	euler1_simpl e(3,5,1000);
	cout << e.result();
	char c;
	while (c=getchar())
	{
		if (c == 'q')break;
	}
    return 0;
}

