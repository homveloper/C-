#include <iostream>
using namespace std;
const int SIZE =20;

void copy_array(char dest[], const char src[], int count);

int main()
{
	char s[SIZE] = { 'H', 'E', 'L', 'L', 'O', '\0' };
	char d[SIZE];
	
	copy_array(d, s, SIZE);
	printf("%s\n", d);

	return 0;
}

void copy_array(char dest[], const char src[], int size)
{
	int i;

	for(i = 0; i < size; i++)
	{
		dest[i] = src[i];
	}
}
