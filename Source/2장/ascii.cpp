#include <iostream>
using namespace std;	// 이름 공간 설정

int main()
{
	char ch = 'A';		// 변수 선언
	int code = ch;
	
	cout <<  ch << "의 아스키 코드 = " << code << endl;

	ch = ch + 1;
	code = ch;
	cout <<  ch << "의 아스키 코드 = " << code << endl;;
	
	return 0;
}
