#include "stdafx.h"
#include "simpleEuler9.h"
#include <iostream>

simpleEuler9::simpleEuler9(int i)
{
	magicNumber = i;
}


simpleEuler9::~simpleEuler9()
{
}

void simpleEuler9::calculateResult()
{
	for (int i = 0; i < tVec.size(); i++) {
		if ((tVec[i].a + tVec[i].b + tVec[i].c) == 1000) {
			std::cout <<"Found triplet for a + b + c = 1000. Product: "<< tVec[i].a * tVec[i].b * tVec[i].c;
			break;
		}
	}
}

void simpleEuler9::calculateTriplets()
{
	for (int i = 1; i < magicNumber; i++) {
		for (int j = i; j < magicNumber; j++) {
			for (int k = j; k < magicNumber; k++) {
				if (((i*i) + (j*j)) == (k*k)) {
					triplets t = triplets();
					t.a = i;
					t.b = j;
					t.c = k;
					tVec.push_back(t);
					
				}
			}
			
		}
	}
}
