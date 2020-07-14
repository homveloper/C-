#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed;
	int gear;
	string color;
	int id;        // 자동차의 시리얼 번호

public:
	// 실체화된 Car 객체의 개수를 위한 정적 변수
	static int numberOfCars;	// 정적 변수의 선언
	Car(int s=0, int g=1, string c="white"): speed(s), gear(g), color(c) {
		// 자동차의 개수를 증가하고 id 번호를 할당한다.
		id = ++numberOfCars;
	}
	// 정적 멤버 함수 
	static int getNumberOfCars() {
		return numberOfCars; // OK!
	}
};
int Car::numberOfCars=0;	// 정적 변수의 정의

int main()
{
	Car c1(100, 0, "blue"); 	// 첫 번째 생성자 호출
	Car c2(0, 0, "white"); 	// 첫 번째 생성자 호출
	int n = Car::getNumberOfCars();	// 정적 멤버 함수 호출
	cout <<"지금까지 생성된 자동차 수 = " << n << endl;
	return 0;
}
