#include "stdafx.h"
#include "simpleEuler2.h"
#include <iostream>


simpleEuler2::simpleEuler2()
{
	limit = 4000000;
}

simpleEuler2::simpleEuler2(int i) {
	limit = i;
}

simpleEuler2::~simpleEuler2()
{
}

void simpleEuler2::calculate() {
	int first = 1;
	int second = 2;
	int tmp;
	unsigned long sum = 2;
	while(true){
		tmp = second;
		second = second + first;
		first = tmp;
		if (second > simpleEuler2::getLimit())break;
		if (second % 2 == 0) {
			sum = sum + second;
		}
		
	}
	simpleEuler2::setResult(sum);
}

int simpleEuler2::getLimit() {
	return limit;
}

void simpleEuler2::setResult(unsigned long i) {
	result = i;
}

unsigned long simpleEuler2::getResult() {
	return result;
}

void simpleEuler2::setLimit(int i) {
	limit = i;
}