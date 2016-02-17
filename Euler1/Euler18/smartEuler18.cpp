#include "stdafx.h"
#include "smartEuler18.h"
#include <fstream>
#include <iostream>
#include <algorithm>

smartEuler18::smartEuler18()
{
}


smartEuler18::~smartEuler18()
{
}

void smartEuler18::readFile(std::string s)
{
	std::ifstream fileStream(s);
	for (int row = 0; row < depth; row++) {
		for (int column = 0; column <= row; column++) {
			fileStream >> triangle[row][column];
		}
	}
	for (int row = 0; row < 10; row++) {
		for (int column = 0; column <= row; column++) {
			std::cout << triangle[row][column] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << ". . ."<<triangle[depth-1][depth-1] << std::endl;
}

int smartEuler18::calculateMaxPath()
{
	std::cout << std::endl;
	std::cout << std::endl;
	for (int row = smartEuler18::depth-1; row >= 1; row--) {
		for (int col = 0; col <= row; col++) {
			if (triangle[row][col]>triangle[row][col + 1]) {
				triangle[row - 1][col] += triangle[row][col];
			}
			else
			{
				triangle[row - 1][col] += triangle[row][col+1];
			}
			
		}
		

	}
	return triangle[0][0];
}

