#include <iostream>
#include <cassert>
#include "Date.h"
using namespace std;

Date::Date() {
	month = 0;
	day = 0;
	year = 0;
	cout << "매개변수 없는 Date 생성자" << endl;
}
Date::Date(int m, int d, int y) {
	month = m; day = d; year = y;
	if ((month < 1) || (month > 12))
	{
		cout << "Month is out of range. ";
		assert(false);
	}
	int daysInMonths[13] = { 0, 31, 28, 31, 30, 31, 30, 31,
	31, 30, 31, 30 ,31 };
	if ((day < 1) || (day > daysInMonths[month]))
	{
		cout << "Day out of range! ";
		assert(false);
	}
	if ((year < 1900) || (year > 2099))
	{
		cout << "Year out of range! ";
		assert(false);
	}
	cout << "매개변수 있는 Date 생성자" << endl;
}
Date::Date(const Date& d) {
	month = d.month;
	day = d.day;
	year = d.year;
	cout << "Date 복사 생성자" << endl;
}
Date :: ~Date()
{
	cout << "Date 소멸자" << endl;
}
void Date::print() const
{
	cout << month << "/" << day << "/" << year << endl;
}
