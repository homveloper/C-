// 수학적인 조합 값을 구하는 예제
#include <iostream>
using namespace std;

// 함수 원형 정의
int get_integer(void);
int combination(int n, int r);
int factorial(int n);

int main()
{
	int a, b;

	a = get_integer();
	b = get_integer();

	cout << "C(" << a << "," << b << ") = " << combination(a, b) << endl;
	return 0;
}

int combination(int n, int r)
{
	return (factorial(n)/(factorial(r) * factorial(n-r)));
}

int get_integer(void)
{
	int n;

	cout << "정수를 입력하시오: ";
	cin >> n;

	return n;
}

int factorial(int n)
{
	int i;
	long result = 1;

	for(i = 1; i <= n; i++)
		result *= i;		// result = result * i
	
	return result;
}
