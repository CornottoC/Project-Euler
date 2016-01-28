#include "stdafx.h"
#include "simpleEuler16.h"
#include "InfInt.h"

simpleEuler16::simpleEuler16()
{
}


simpleEuler16::~simpleEuler16()
{
}

void simpleEuler16::calculatePower(int power)
{

}

void simpleEuler16::calculateResult()
{
	InfInt big = "2";
	long sum = 0;
	std::string str;
	for (int i = 1; i < 1000; i++) {
		big = big * 2;
	}
	std::cout << big<<std::endl;
	str = big.toString();
	for (int i = 0; i < str.length(); i++) {
		sum += std::stoi(std::string(1,str[i]));
		std::cout << std::string(1,str[i]) << " ";
	}
	std::cout<<std::endl << sum<<std::endl;
}
