#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	const int FACES=6;
	int freq[FACES] = { 0 };		// 주사위의 면의 빈도를 0으로 한다.
	int i;
	
	for(i = 0; i < 10000; i++)		// 주사위를 10000번 던진다.
		++freq[ rand() % FACES ];	// 해당면의 빈도를 하나 증가한다.

	cout << "====================\n";
	cout << "면     빈도\n";
	cout << "====================\n";

	for(i = 0; i < FACES; i++)
		cout << i << "         " << freq[i] << endl;
	
	return 0;
}
