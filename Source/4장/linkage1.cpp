#include <stdio.h>
using namespace std;

int all_files;	// 다른 소스 파일에서도 사용할 수 있는 전역 변수
static int this_file; // 현재의 소스 파일에서만 사용할 수 있는 전역 변수
extern void sub();

int main()
{
	sub();
	cout << all_files << endl;
	return 0;
}

