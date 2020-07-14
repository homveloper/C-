#include <iostream>
#include <algorithm>
#include <vector>
#include "myheader.h"
using namespace std;

int main()
{
	int value[10]={ 82, 25, 26, 7, 67, 55, 31, 19, 99 };

	vector<int> v1(&value[0],&value[10]);
	print(v1,"초기 리스트\n");
	sort (v1.begin(), v1.end());
	print(v1, "sort() 적용후 리스트\n");

	vector<int> v2(&value[0],&value[10]);
	stable_sort (v2.begin(), v2.end());
	print(v2, "stable_sort() 적용후 리스트\n");

	vector<int> v3(&value[0],&value[10]);
	partial_sort (v3.begin(), v3.begin()+3, v3.end());
	print(v3, "partial_sort() 적용후 리스트\n");

	vector<int> v4(&value[0],&value[10]);
	nth_element(v4.begin(), v4.begin()+5, v4.end());
	print(v4, "nth_element() 적용후 리스트\n");

	return 0;
}
