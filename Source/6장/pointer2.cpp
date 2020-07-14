#include <iostream>
using namespace std;

int main()
{
	char c = 'A';		// 문자형 변수 정의
	int i = 10000;	// 정수형 변수 정의
	double d = 6.78;	// 실수형 변수 정의

	char *pc = &c;	// 문자형 포인터 정의 및 초기화
	int *pi = &i;         // 정수형 포인터 정의 및 초기화
	double *pd = &d;     // 실수형 포인터 정의 및 초기화

	(*pc)++;		// 간접 참조로 1 증가
	*pi = *pi + 1;	// 간접 참조로 1 증가
	*pd += 1;		// 간접 참조로 1 증가

	cout << c << endl;
	cout << i << endl;
	cout << d << endl;
		
	return 0;
}
