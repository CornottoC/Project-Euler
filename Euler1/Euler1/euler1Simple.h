#pragma once
//euler1Simple.h
#include "stdafx.h"
class euler1_simpl
{
public:
	void setFactors(int, int);
	void setLimit(int);
	int result();
	euler1_simpl();
	euler1_simpl(int, int, int);

private:
	int factor1;
	int factor2;
	int limit;
};