#include <iostream>
using namespace std;

class Date {
private:
	int year, month, day;

public:
	Date(int year, int month, int day) {
		this->year = year;
		this->month = month;
		this->day = day;
	}

	Date operator+(const Date& D2) const;
	friend ostream& operator<<(ostream& os, const Date& D);
	void display() {
		cout << "(" << year << " , " << month << " , " << day <<")"<< endl;
	}
};

ostream& operator<<(ostream& os, const Date& D) {
	os<< "(" << D.year << " , " << D.month << " , " << D.day << ")" << endl;
}

Date Date::operator+(const Date& D2)const {
	Date D(2020, 8, 1);
	D.day = this->day + D2.day;

	if(D.day  > 31){
		day = 1;
		month ++;
	}


	if(month > 12){
		month =1;
		year++;
	}

	return D;
}

int main() {

}