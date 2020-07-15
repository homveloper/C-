#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout.setf(ios_base::fixed);		// 소수점 표기법 설정

	float fvalue = 1234567890.12345678901234567890;
	double dvalue = 1234567890.12345678901234567890;
	cout << "float형 변수=" << fvalue << endl;
	cout << "double형 변수=" << dvalue << endl;

	cout.setf(ios_base::scientific);

	cout << "float형 변수=" << fvalue << endl;
	cout << "double형 변수=" << dvalue << endl;

	return 0;
}