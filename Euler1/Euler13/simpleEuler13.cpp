#include "stdafx.h"
#include "simpleEuler13.h"
#include <fstream>
#include <iostream>


simpleEuler13::simpleEuler13()
{
}


simpleEuler13::~simpleEuler13()
{
}

void simpleEuler13::readFile(std::string fileName)
{
	std::fstream inFileStream(fileName);
	for (int i = 0; i < 100; i++) {
		inFileStream >> strDigits[i];
	}
	for (int i = 0; i < 100; i++) {
		std::cout << strDigits[i] << std::endl;
	}
}

void simpleEuler13::pupulateLongArray()
{
	for (int i = 0; i < 100; i++) {
		digits[i] = std::stoll(strDigits[i].substr(0, 15));
	}
	for (int i = 0; i < 100; i++) {
		std::cout << "Number: \t" << digits[i] << std::endl;
	}
	
}

void simpleEuler13::calculate()
{
	unsigned long long sum=0;


	for (int i = 0; i < 100; i++) {
		sum = (sum + digits[i]);
	}
	std::string temp = std::to_string(sum);
	std::cout <<"\t\t"<< temp.substr(0,10);

}
