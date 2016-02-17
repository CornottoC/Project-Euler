#pragma once
class date
{
public:
	date(int, int, int);
	~date();
	date getNext();
private:
	enum days { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
	enum months {JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMNBER};
	int day;
	int month;
	int year;
};

