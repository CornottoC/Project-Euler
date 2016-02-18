#include "stdafx.h"
#include "simpleEuler22.h"
#include <fstream>
#include <iostream>
#include <algorithm>

simpleEuler22::simpleEuler22()
{
}


simpleEuler22::~simpleEuler22()
{
}

void simpleEuler22::readFileAndPopulate(std::string filename)
{
	std::ifstream fileStream(filename);
	std::string temp;
	char tempChar;
	while (fileStream >> tempChar) {
		if (tempChar == '"') {
			while (fileStream >> tempChar) {
				if (tempChar == '"') {
					nameVector.push_back(temp);
					temp = "";
				}
				else if (tempChar == ',')break;
				else
				{
					temp += tempChar;
				}
			}
		}
	}
	std::sort(nameVector.begin(), nameVector.end());
	}

int simpleEuler22::nameValue(std::string name)
{
	int sum=0;
	for (int i=0; i < name.length(); i++) {
		sum += (int)name[i]-64;
	}
	return sum;
}

void simpleEuler22::totVecValue()
{
	unsigned long result = 0;
	for (int i = 0; i < nameVector.size(); i++) {
		result += (nameValue(nameVector[i]) * (i + 1));
	}
	std::cout << result;
}

void simpleEuler22::lookForName(std::string s)
{
	int pos = std::find(nameVector.begin(), nameVector.end(), s) - nameVector.begin();
	std::cout << pos;
}
