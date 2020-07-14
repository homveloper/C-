#include <iostream>
using namespace std;

int main()
{
	char str[] = "komputer";
	int i;
	
	for(i=0;i<8;i++)
		cout << str[i] << " ";

	str[0] = 'c';
	cout << endl;

	for(i=0;i<8;i++)
		cout << str[i] << " ";
	cout << endl;
	return 0;	
}
