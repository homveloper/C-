#include <iostream>
using namespace std;

// 함수 원형
int compute_sum(int n);

int main(void)
{
	int n, sum;

	cout << "정수를 입력하시오: ";
	cin >> n;

	sum = compute_sum(n);		// 함수 사용

	cout << "1부터 " << n << "까지의 합은 " << sum << "입니다. \n";
}

// 함수 정의
int compute_sum(int n)
{
	int i;
	int result = 0;

	for(i = 1; i <= n; i++)
		result += i;

	return result;
} 
