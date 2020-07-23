#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void main() {
	srand(time(NULL));
	const int num = 10;
	int frequency[num] = { 0 };

	for (int i = 0; i < 100; i++)
		++frequency[rand() % num];

	int maxIndex = 0;

	for(int i=0; i<10; i++){
		maxIndex = frequency[i] > frequency[maxIndex] ? i : maxIndex;

		if(frequency[i] > frequency[maxIndex])
			maxIndex = i;
	}
	cout<<maxIndex<<" : "<<frequency[maxIndex]<<endl;
}