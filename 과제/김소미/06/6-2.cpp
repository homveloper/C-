//연습문제 2. 1번 문제를 참조하여 2개 벡터를 내적하는 함수 int dotProduct(int a[], int b[], int size)를 작성하라.
//벡터의 내적은 다음과 같다.

#include <iostream>
#include <time.h>
#include <stdio.h>
using namespace std;
int dotProduct(int a[], int b[], int size);
int dotPro = 0;

int main() {
	srand(time(NULL));
	const int size = 3;
	int a[size] = { rand() % 50, rand() % 50, rand() % 50 };
	int b[size] = { rand() % 50, rand() % 50, rand() % 50 };

	dotProduct(a, b, size);
}

int dotProduct(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		dotPro += a[i] * b[i];
		cout << "a[" << i + 1 << "]은" << a[i] << ", b[" << i + 1 << "]은" << b[i] << "이다." << endl;
	}cout << "내적 값은 " << dotPro << "이다" << endl;

	return 0;
}

