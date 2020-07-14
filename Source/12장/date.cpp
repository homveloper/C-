#include <iostream>
using namespace std;

class Date
{
	friend bool equals(Date d1, Date d2);
private:
	int year, month, day;
public:
	Date(int y, int m, int d)
	{
		year = y; 
		month = m; 
		day = d; 
	}
}
// ÇÁ·»µå ÇÔ¼ö
bool equals(Date d1, Date d2)
{
	return d1.year == d2.year && d1.month == d2.month && d1.day == d2.day;
}

int main()
{
	Date d1(1960, 5, 23), d2(2002, 7, 23);
	cout << equal_f(d1, d2) << endl;
}
