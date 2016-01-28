#include "stdafx.h"
#include "simpleEuler14.h"
#include <iostream>

simpleEuler14::simpleEuler14()
{
}


simpleEuler14::~simpleEuler14()
{
}

void simpleEuler14::calculate()
{

	unsigned int head = 0;
	unsigned int chain = 1;
	unsigned int maxChain = 1;
	unsigned int maxChainOwner = 1;

	for (int term = 1; term < 1000000; term++) {
		head = term;
		chain = 0;
		while (head != 1) {
			(head % 2 == 0)? head = head / 2: head = (3*head) + 1;
			chain++;
		}
		if (chain > maxChain) {
			maxChain = chain;
			maxChainOwner = term;
		}
		
	}
	std::cout << "The longest chain is: " << maxChain << " started with: " << maxChainOwner;

}
