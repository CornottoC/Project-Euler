// Euler18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "simpleEuler18.h"
#include "smartEuler18.h"

int main()
{
	/*
	simpleEuler18 e = simpleEuler18();
	e.readFile("data.txt");
	e.calculateMaxPath(0, 0, 0);
	std::cout << "Result: " << e.getMaxPath()<<" probably cause of unknown reasons: "<<e.getMaxPath()-1<<std::endl;
	*/
	smartEuler18 s = smartEuler18();
	s.readFile("data.txt");
	std::cout << "Smart Result: " << s.calculateMaxPath()<<std::endl;
	
	char c;
	while (c = getchar())
	{
		if (c == 'q')break;
	}
	return 0;
}
