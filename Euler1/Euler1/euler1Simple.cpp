#include "stdafx.h"
#include "euler1Simple.h"

void euler1_simpl::setFactors(int i1, int i2) {
	factor1 = i1;
	factor2 = i2;
}

void euler1_simpl::setLimit(int i) {
	limit = i;
}

long euler1_simpl::result(){
	long sum = 0;
	for (int i = 0; i < limit; i++) {
		if ((i % 3 == 0) || (i % 5 == 0))sum += i;
	}
	return sum;
}

euler1_simpl::euler1_simpl() {
	setFactors(3, 5);
	setLimit(100);
}

euler1_simpl::euler1_simpl(int factor1, int factor2, int limit) {
	setFactors(factor1, factor2);
	setLimit(limit);
}

