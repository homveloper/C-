#include <iostream>
using namespace std

int main()
{
	const int SIZE = 5;
	int i;
	int a[SIZE] = {1, 2, 3, 4, 5};
	int b[SIZE];

	for(i = 0; i < SIZE; i++)
		b[i] = a[i];	

	return 0;
}
