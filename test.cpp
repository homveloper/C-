#include <iostream>
using namespace std;

int main()
{
	int a = 2;
	a = ++a * 20;
	cout << a << endl;

	a = 2;

	a = a++ * 20;
	cout << a << endl;
}