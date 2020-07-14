#include <iostream>
using namespace std;

int x;			// 전역 변수
extern int y;		// 현재 소스 파일의 뒷부분에 선언된 변수
extern int z;		// 다른 소스 파일의 변수

int main()
{
	extern int x;    // 전역 변수 x를 참조한다. 없어도된다. 
	
	x = 10;
	y = 20;
	z = 30;	

	return 0;
}

int y;		// 전역 변수
