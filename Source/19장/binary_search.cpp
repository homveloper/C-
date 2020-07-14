#include <iostream>
#include <vector>
#include <algorithm>
#include "myheader.h"
using namespace std;

int main()
{
	const int wanted = 6;
	int values[9] = { 1, 3, 5, 5, 5, 8, 11, 20, 30 };
	vector<int> vec(&values[0], &values[9]);
	vector<int>::iterator it;

	print(vec);
	bool isInIt =binary_search(vec.begin(),vec.end(), wanted);

	if(isInIt ==true )
		cout << wanted << "을 찾았음 "<< endl;
	else {
		it =lower_bound(vec.begin(), vec.end(), wanted);
		vec.insert(it, wanted);
	}
	print(vec);

	return
