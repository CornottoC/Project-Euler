#include "stdafx.h"
#include "date.h"


date::date(int d, int m, int y)
{
	if (((d > 0) && (d < 32)) && ((m < 13) && (m>0) && ((y>0)))){
		date::day = d;
		date::month = m;
		date::year = y;
}
//default date
	else
	{
		date::day = 1;
		date::month = 1;
		date::year = 1901;
	}

}

date::~date()
{
}

date date::getNext()
{
	
	return date();
}
