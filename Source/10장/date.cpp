#include <iostream>
using namespace std;

class Date {
private:
	int year;
	int month;
	int day;
public:
	Date();						// 디폴트 생성자
	Date(int year);					// 생성자
	Date(int year, int month, int day);			// 생성자
	void setDate(int year, int month, int day);		// 멤버 함수
	void print();						// 멤버 함수
};

Date::Date()	// 디폴트 생성자
{		
	year = 2010;
	month = 1;
	day = 1;
}
Date::Date(int year) // 생성자
{				
	setDate(year, 1, 1);
}
Date::Date(int year, int month, int day) // 생성자
{	
	setDate(year, month, day);
}
void Date::setDate(int year, int month, int day) 
{
	this->month = month;		// this는 현재 객체를 가리킨다.
	this->day = day;
	this->year = year;
}
void Date::print()
{
	cout << year << "년 " << month <<  "월 " << day << "일" << endl;
}

int main()
{
	Date date1(2009, 3, 2); 	// 2009.3.2
	Date date2(2009); 		// 2009.1.1
	Date date3; 			// 2010.1.1

	date1.print();
	date2.print();
	date3.print();
	return 0;
}
_
