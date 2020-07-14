#include <iostream>
using namespace std;

int square(int n);				// 함수 원형

int main()
{
	int i, result;

	for(i = 0; i < 5; i++)
	{
		result = square(i);		// 함수 호출
		cout <<  result << endl;
	}

	return 0;
}

int square(int n)				// 함수 정의
{
	return(n * n);
}
