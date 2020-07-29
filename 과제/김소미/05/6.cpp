// 연습문제 6.정수 n을 입력받으면 다음을 계산하는 재귀적 프로그램을 작성하라.(성공, main안에 지역번수?넣기)

#include <iostream>
using namespace std;

int square(int n);

int main() {
	int n;
	cin >> n;
	cout << square(n) << endl;
}

int square(int n) {
	if (n <= 1) {
		return 1;
	}
	return pow(n, 3) + square(n - 1);
}