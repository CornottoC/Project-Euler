#include "stdafx.h"
#include "simpleEuler11.h"
#include <fstream>
#include <iostream>


simpleEuler11::simpleEuler11()
{
}

simpleEuler11::~simpleEuler11()
{
}

//takes the file from filename and populates the 2D-array "theFeld" 
//with the values
void simpleEuler11::readFile(std::string fileName)
{
	std::fstream inFileStream(fileName);
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			inFileStream >> theField[i][j];
		}
	}	
}

//loop structure that tests for all values from [0][0]to[16][20]
//and multiplys it with the 4 values under it
void simpleEuler11::calculateDown()
{
	int temp = 1;
	for (int column = 0; column < 20; column++) {
		for (int row = 0; row < 17; row++) {
			for (int below = 0; below < 4; below++) {
				temp *= theField[row + below][column];
			}
			//set new max and reset value
			if (temp > max) {
				max = temp;
				std::cout << "New 'below' Max: " << temp << " found at[row][column]: \t[" << row << "][" << column << "]" << std::endl;
				temp = 1;
			}
			else
			{
				temp = 1;
			}
		}
	}
}

//loop structure that tests for all values from [0][0]to[20][16]
//and multiplys it with the 4 values NEXT to it
void simpleEuler11::calculateRight()
{
	int temp = 1;
	for (int row = 0; row < 17; row++) {
		for (int column = 0; column < 20; column++) {
			for (int right = 0; right < 4; right++) {
				temp *= theField[row][column + right];
			}

			//set new max and reset value
			if (temp > max) {
				max = temp;
				std::cout << "New 'right' Max: " << temp << " found at[row][column]: \t[" << row << "][" << column << "]" << std::endl;
				temp = 1;
			}
			else
			{
				temp = 1;
			}
		}
	}
}

//loop structure that tests for all values from [0][0]to[16][16]
//and multiplys it with the 4 values diagonally down RIGHT of it
void simpleEuler11::calculateDiagonalRight()
{
	int temp = 1;
	for (int row = 0; row < 17; row++) {
		for (int column = 0; column < 17; column++) {
			for (int diagonal = 0; diagonal < 4; diagonal++) {
				temp *= theField[row+ diagonal][column + diagonal];
			}

			//set new max and reset value
			if (temp > max) {
				max = temp;
				std::cout << "New 'diagonal right' Max: " << temp << " found at[row][column]: \t[" << row << "][" << column << "]" << std::endl;
				temp = 1;
			}
			else
			{
				temp = 1;
			}
		}
	}
}

//loop structure that tests for all values from [0][3]to[16][20]
//and multiplys it with the 4 values diagonally down LEFT of it
void simpleEuler11::calculateDiagonalLeft()
{
	int temp = 1;
	for (int row = 0; row < 17; row++) {
		for (int column = 3; column < 20; column++) {
			for (int diagonal = 0; diagonal < 4; diagonal++) {
				temp *= theField[row + diagonal][column - diagonal];
			}

			//set new max and reset value
			if (temp > max) {
				max = temp;
				std::cout << "New 'diagonal left' Max: " << temp << " found at[row][column]: \t[" << row << "][" << column << "]" << std::endl;
				temp = 1;
			}
			else
			{
				temp = 1;
			}
		}
	}
}
