// 주소 연산자
#include <iostream>
using namespace std;

int main()
{
	int i = 10;
	char c = 69;
	double f = 12.3;

	cout << "i의 주소: " << &i << endl;	// 변수 i의 주소출력
	cout << "c의 주소: " << (void *)&c << endl;	// 변수 c의 주소출력
	cout << "f의 주소: " << &f << endl;	// 변수 f의 주소출력

	return 0;
}
