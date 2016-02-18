#include "stdafx.h"
#include "date.h"
#include <iostream>

date::date(int d, int m, int y, int dw)
{
	if (((d > 0) && (d < 32)) && ((m < 13) && (m>0)) && (y>0)&&((dw<8)&&(dw>0))){
		date::day = d;
		date::month = m;
		date::year = y;
		date::dayOfWeek = dw;
}
//default date
	else
	{
		date::day = 1;
		date::month = 1;
		date::year = 1901;
	}

}

date::date()
{
}

date::~date()
{
}

date date::getNext()
{
	//std::cout << "Setting next day\t";
	int d;
	int m;
	int y;
	int dw;
	switch (day)
	{
	case 28:
		((month == FEBRUARY) && !(isLeapYear(year)))? d = 1 : d = 29;
		break;
	case 29:
		(month == FEBRUARY) ? d = 1 : d = 30;
		break;
	case 30: 
		((month == SEPTEMBER) || (month == JUNE) || (month == APRIL) || (month == NOVEMBER)) ?
			d = 1: d = 31;
		break;
	case 31:
		d = 1;
		break;
	default:
		d = day + 1;
		break;
	}
	//std::cout << " d: " << d;

	switch (dayOfWeek)
	{
	case SUNDAY:dw = MONDAY;
		break;
	default:
		dw = dayOfWeek + 1;
		break;
	}
	//std::cout << " dw: " << dw;
	if (d == 1) {
		(month == DECEMBER) ? m = JANUARY : m = month + 1;
	}
	else
	{
		m = month;
	}
	//std::cout << " m: " << m;
	((day == 31) && (month == DECEMBER)) ? y = year + 1 : y = year ;
	//std::cout << " y: " << y;
	
	return date(d,m,y,dw);
}

bool date::isLeapYear(int y)
{
	if ((y % 4 == 0) && (y % 400 != 0)) {
		return true;
	}
	else
	{
		return false;
	}

}

bool date::operator<(const date &d)
{
	if (year < d.year) {
		return true;
	}
	else if ((year == d.year) && (month < d.month)) {
		return true;
	}
	else if ((year == d.year) && (month == d.month) && (day < d.day)) {
		return true;
	}
	else
	{
		return false;
	}
	
}

bool date::isSundayFirst()
{
	if ((day == 1) && (dayOfWeek == 7)) {
		return true;
	}
	else
	{
		return false;
	}

}

