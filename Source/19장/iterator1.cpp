#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec;		// 정수형 벡터 생성	
	for(int i=0;i<10;i++)
		vec.push_back(i);

	vector<int>::iterator it;	// 반복자 객체 생성
	for(it=vec.begin(); it != vec.end() ; it++)	// 컨테이너의 모든 요소를 출력
		cout << *it << " ";
	cout << endl;

	for(it=vec.begin(); it != vec.end() ; it++)	// 컨테이너의 모든 요소를 -1로 설정
		*it = 0;

	for(it=vec.begin(); it != vec.end() ; it++)	// 컨테이너의 모든 요소를 출력
		cout << *it << " ";
	cout << endl;
	return 0;
}
