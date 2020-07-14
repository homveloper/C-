#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	const int SIZE = 10;
	int grade[SIZE];
	int i;

	for(i = 0; i < SIZE; i++)
		grade[i] = rand() % 100;

	cout << "====================\n";
	cout << "ÀÎµ¦½º      °ª\n";
	cout << "====================\n";

	for(i = 0; i < SIZE; i++)
		cout << i << "        " << grade[i] << endl;
	return 0;
}
