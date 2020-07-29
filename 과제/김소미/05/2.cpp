// 연습문제 2. 주차 요금을 계산해보자. 주차장의 최초 2시간은 3000원이다.
//그 이후 부터는 시간당 2000원의 주차료가 부과된다. 단 주차료는 하루 동안 10000원을 넘지 않는다. 주차 시간이 주어지면 요금을 계산하는 함수를 만들어 프로그램을 작성하라.
//(성공)

#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int rate = 2000;
	int pay = 0;
	int hour;

	cout << "enter the parking time" << endl;
	cin >> hour;
	pay = (hour-2) * 2000 + 3000;

	if (hour >= 2 && pay >= 10000) {
		pay = 10000;
		cout << "Your parking fee is 10,000 won " << endl;
	}
	else if (hour >= 2) {
		pay = (hour-2) * 2000 + 3000;
		cout << "Your parking fee is " << pay << "won" << endl;
	}else{
        pay += 3000;
    }
}


