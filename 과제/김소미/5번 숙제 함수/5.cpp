// 연습문제 5.두 정수를 입력하면 두 정수 사이에 속하는 수 중 하나를 랜덤으로 반환하는 함수 int randInt(int a, int b)를 작성하여 보자.
//randInt(1,3)이라면 1부터 3까지 수 중 하나를 랜덤으로 반환한다.(실패)

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randlnt(int a, int b);


int main() {
    srand(time(NULL));
	int random = rand();
	cout << random << endl;
}