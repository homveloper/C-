#include <iostream>
using namespace std;

int main()
{
	int s[3][3][3];	// 3차원 배열 선언
	int x, y, z;		// 3개의 인덱스 변수
	int i = 1;		// 배열 원소에 저장되는 값
	
	for(z=0;z<3;z++)	
		for(y=0;y<3;y++)	
			for(x=0;x<3;x++)	
				s[z][y][x] = i++;
	return 0;
}
