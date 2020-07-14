#include <iostream>
#include <algorithm>
#include <vector>
#include "myheader.h"
using namespace std;

// 각 요소에 대하여 호출되는 함수
int increment(int element)
{
	return ++element;
}
int main()
{
	vector<int> vec;
	vector<int> result(10);
	for(int i=0;i<10; i++)
		vec.push_back(i);

	print(vec);
	transform (vec.begin(), vec.end(), result.begin(), increment);
	print(result);
	return 0;
}
