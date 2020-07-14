// 반복적인 팩토리얼 함수 계산
#include <iostream>
using namespace std;
long factorial_iter(int n);

int main()
{
	int x;
	long f;

	cout << "정수를 입력하시오: " ;
	cin >> x;

	f = factorial_iter(x);
	cout << x << "!은 " << f << "입니다. " << endl;

	return 0;
}

long factorial_iter(int n)
{
	long result;

	for(result = 1; n > 1; n--)
		result *= n;

	return result;
}
