#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	const int DIVIDE=10;
	int freq[DIVIDE] = { 0 };
	int i;
	
	for(i = 0; i < 100; i++)	
		++freq[ rand() % DIVIDE ];	
		
	cout << "========================\n";
	cout << "random number frequency\n";
	cout << "========================\n";

	for(i = 0; i < DIVIDE; i++)
		cout << i << "         " << freq[i] << endl;
	
	return 0;
}
