// 전역 변수
#include <iostream>
using namespace std;

int x = 123;	// 전역 변수

void sub1()
{
	cout << "In sub1()  x=" << x << endl;	// 전역 변수 x 접근
}
	
void sub2()
{
	cout << "In sub2()  x=" << x << endl;	// 전역 변수 x 접근
}

int main(void)
{
	sub1();
	sub2();

	return 0;
}
