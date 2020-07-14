#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec;		// 정수형 벡터 생성	
	for(int i=0;i<10;i++)
		vec.push_back(i);

	vector<int>::iterator it;	// 반복자 객체 생성
	it = vec.begin();
	cout << it[2] << " " << endl;
	cout << *(it+2) << " " << endl;
	it = it + 5;
	it--;
	cout << *it << " " << endl;
	return 0;
}
