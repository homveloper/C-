#include <iostream>
using namespace std;

int main() 
{ 
	int *pi; 	// 동적 메모리를 가리키는 포인터

	pi = new int; 	// ① 동적 메모리 할당

	*pi = 100;		// ② 동적 메모리 사용
	delete pi; 		// ③ 동적 메모리 반납

	return 0;
} 
