//연습문제 3. 0 ~ 9 사이의 난수를 100번 생성하여 가장 많이 생성된 수를 출력하는 프로그램을 작성하시오.

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	const int Num = 10;
	int freq[Num] = { 0 };
	int i;

	for (i = 0; i < 100; i++)
		++freq[rand() % Num];

	cout << "수        빈도\n";

	for (i = 0; i < Num; i++)
		cout << i << "          " << freq[i] << endl;

	return 0;
}