#include <iostream>
#include <vector>
#include "myheader.h"
using namespace std;

int main()
{
	vector<int> vec;	// 정수형 벡터 생성	

	vec.push_back(10);	// 벡터의 끝에 데이터 추가
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);

	print(vec);		// 벡터의 모든 요소를 출력한다.
	return 0;
}
