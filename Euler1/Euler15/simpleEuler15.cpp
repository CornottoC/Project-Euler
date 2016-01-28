#include "stdafx.h"
#include "simpleEuler15.h"
#include <iostream>

simpleEuler15::simpleEuler15()
{

}

simpleEuler15::simpleEuler15(int row, int column)
{
	maxRow = row;
	maxColumn = column;
}


simpleEuler15::~simpleEuler15()
{
}

void simpleEuler15::recursionBomb(int row, int column)
{
	if (row != maxRow)recursionBomb(row + 1, column);
	if (column != maxColumn)recursionBomb(row, column + 1);
	if ((row == maxRow) && (column == maxColumn)) {
		counter++;
	}
}

void simpleEuler15::printResult()
{
	std::cout << counter<<std::endl;
}


