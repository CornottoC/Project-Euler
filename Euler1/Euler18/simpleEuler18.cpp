#include "stdafx.h"
#include "simpleEuler18.h"
#include <fstream>
#include <iostream>
#include <algorithm>


simpleEuler18::simpleEuler18()
{
	
	for (int row = 0; row < 15; row++) {
		for (int col = 0; col < 15; col++) {
			triangle[row][col] = 0;
		}
	}
	for (int row = 0; row < 15; row++) {
		for (int col = 0; col < 15; col++) {
			std::cout << triangle[row][col] <<" ";
		}
		std::cout << std::endl;
	}
}


simpleEuler18::~simpleEuler18()
{
}

void simpleEuler18::readFile(std::string s)
{
	std::ifstream fileStream(s);
	for (int row = 0; row < 15; row++) {
		for (int column = 0; column <= row; column++) {
			fileStream >> triangle[row][column];
		}
	}
	for (int row = 0; row < 15; row++) {
		for (int column = 0; column <= row; column++) {
			std::cout << triangle[row][column]<<" ";
		}
		std::cout << std::endl;
	}
}

int simpleEuler18::calculateMaxPath(int row, int column, int counter)
{
	if (row < 15) {
		counter += triangle[row][column];
		calculateMaxPath((row + 1), column, counter);
		calculateMaxPath((row + 1), (column+1), counter);
		return 0;
	}
	else
	{
		counter += triangle[row][column];
		//std::cout << "MaxPath: " << maxPath << std::endl;
		if ((counter > maxPath)&&(counter < 15000))maxPath = counter;
		return counter;
	}
	
}

int simpleEuler18::getMaxPath()
{
	return maxPath;
}
