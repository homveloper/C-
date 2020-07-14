#include <iostream>
using namespace std;

int main()
{
	int i = 3000;
	int *p = &i;			// 변수와 포인터 연결
	
	cout << &i << endl;	// 변수의 주소 출력
	cout << p << endl;	// 포인터의 값 출력

	cout << i << endl;	// 변수의 값 출력
	cout << *p << endl;	// 포인터를 통한 간접 참조 값 출력

	return 0;
}	
