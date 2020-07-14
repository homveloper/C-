// 동일한 이름의 전역 변수와 지역 변수
#include <iostream>
using namespace std;

int sum = 1;		// 전역 변수

int main()
{
	int i = 0;
	int sum = 0;		// 지역 변수

	for(i = 0; i <= 10; i++)
	{
		sum += i;		// 지역 변수가 전역 변수를 가린다.
	}
	cout << "sum = " << sum << endl;

	return 0;
}
