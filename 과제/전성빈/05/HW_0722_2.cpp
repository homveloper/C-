#include <iostream>
using namespace std;

int fare(int charge, int hour);

int main()
{
	int charge = 2000;
	int hour;
	int fare = 0;

	cout << "parking hour" << endl;
	cin >> hour;

	if (fare >= 10000)
		fare = 10000;
	else if (hour > 2)
		fare = 3000 + hour * 2000;
	else if (hour <= 2)
		fare = 3000;

	cout << "fare=" << fare << endl;
}

