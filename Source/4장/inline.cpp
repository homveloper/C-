#include <iostream>
using namespace std;

// 정수값을 제곱하는 함수
inline double square(double i)
{
	return i*i;
}
int main()
{
	double result;

	cout << "2.0의 제곱은 ";
	result = square(2.0);
	cout << result << endl;
	cout << "3.0의 제곱은 ";
	result = square(3.0);
	cout << result << endl;
	return 0;
}
