#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string fruits[5] = { "사과", "토마토", "배", "수박", "키위" };
	vector<string> vec(&fruits[0], &fruits[5]);	// 배열->벡터

	vector<string>::iterator it;		// 반복자 정의
	it = find(vec.begin(), vec.end(), "수박");

	if (it != vec.end()) 	
		cout << "수박이 " << distance(vec.begin(), it) << "에 있습니다." << endl;

	return 0;
}
