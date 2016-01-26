// Euler1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "euler1Simple.h"
#include "simpleChronoTimer.h"
#include <iostream>

using namespace std;

int main()
{
	long tmp = 0;
	simpleChronoTimer t;
	t.start();
	euler1_simpl e(3,5,1000);
	tmp = e.result();
	t.stop();
	cout << "The result: " <<  tmp << endl;
	cout << "Took: ";
	t.printReport();
	cout << " to calculate";
	char c;
	while (c=getchar())
	{
		if (c == 'q')break;
	}
    return 0;
}

