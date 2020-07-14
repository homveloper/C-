#include <iostream>
#include <string>
using namespace std;

class Date {
private:
	int year;
	int month;
	int day;

public:
	int getYear();
	void setYear(int y);
	int getMonth();
	void setMonth(int m);
	void setDay(int d);
	int getDay();
	void print(); 
};

int Date::getYear()
{
	return year;
}

void Date::setYear(int y)
{
	year = y;
}

int Date::getMonth()
{
	return month;
}

void Date::setMonth(int m)
{
	month = m;
}

int Date::getDay()
{
	return day;
}

void Date::setDay(int d)
{
	day = d;
}

void Date::print()
{
	cout << year << "³â " << month <<  "¿ù " << day << "ÀÏ" << endl;
}

int main() 
{
	Date date;

	date.setYear(2010);
	date.setMonth(1);
	date.setDay(20);
	date.print();

	return 0;
}
