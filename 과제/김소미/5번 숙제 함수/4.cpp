// 연습문제 4.돈을 저축하는 프로그램을 작성해보자. 돈을 저장하는 함수 int save(int amount)를 이용해보자.(void draw는 뭔말인지 모름)

#include <iostream>
using namespace std;
int amount;
int sum=0;
int save(int amount);
void draw(int amount);

int main() {
	cout << "How much do you want to save?(Finish is -1)" << endl;
	
	cin >> amount;
    while (amount != -1) {
		save(amount);
	} cout << "Finish" << endl; // -1넣어도 실행이 안되네요ㅠ
}

int save(int amount) {
	sum += amount;
	cout << "All save is " << sum << "won" << endl;
	return sum;
}

void draw(int amount) {
	sum -= amount;
	cout << "All draw is " << sum << "won" << endl;
}