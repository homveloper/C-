#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include ¡°myheader.h"
using namespace std;

int main()
{
	vector<int> vec;
	for(int i=0;i<10; i++)
		vec.push_back(rand()%100);

	sort (vec.begin(), vec.end(), greater<int>());
	print(vec);
	return 0;
}
