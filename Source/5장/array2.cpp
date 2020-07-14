#include <iostream>
using namespace std;

int main()
{
	const int SIZE=10;
	int grade[SIZE] = { 31, 63, 62, 87, 14, 25, 92, 70, 75, 53 };
	int i;

	cout << "====================\n";
	cout << "ÀÎµ¦½º      °ª\n";
	cout << "====================\n";

	for(i = 0; i < SIZE; i++)
		cout << i << "        " << grade[i] << endl;

	return 0;
}
