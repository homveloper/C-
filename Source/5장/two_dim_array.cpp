#include <iostream>
using namespace std;

int main()
{
	int s[3][5];		// 2차원 배열 선언
	int i, j;		// 2개의 인덱스 변수
	int value = 0;	// 배열 원소에 저장되는 값
	
	for(i=0;i<3;i++)	
		for(j=0;j<5;j++)	
			s[i][j] = value++;

	for(i=0;i<3;i++)	
		for(j=0;j<5;j++)	
			cout << s[i][j];
	return 0;
}
