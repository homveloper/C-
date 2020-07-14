#include <iostream>
#include <vector>
#include <algorithm>
#include "myheader.h"
using namespace std;

int main()
{
	vector<int> v1;
	for( int i = 0; i < 10; i++ ) {
		v1.push_back( i );
	}
	cout << "fill() 이전의 값 ";
	print(v1);
	fill( v1.begin(), v1.end(), 0);

	cout << "fill() 이후의 값 ";
	print(v1);
	return 0;
}
