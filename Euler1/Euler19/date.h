#pragma once
class date
{
public:
	date(int, int, int, int dw = 1);
	date();
	~date();
	date getNext();
	bool isLeapYear(int);
	bool operator <(const date&);
	bool isSundayFirst();
private:
	enum days { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
	enum months {JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};
	int day;
	int month;
	int year;
	int dayOfWeek;
};

