#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	// 멤버 변수 선언
	int speed; // 속도
	int gear; // 기어
	string color; // 색상

	// 멤버 함수 선언
	void speedUp() { // 속도 증가 멤버 함수
		speed += 10;
	}

	void speedDown() { // 속도 감소 멤버 함수
		speed -= 10;
	}
};

Car globalCar;			// ① 전역 객체
int main()
{
	Car localCar;			// ② 지역 객체
	Car *dynCar = new Car;	// ③ 동적 객체 생성

	globalCar.speed = 100;;
	localCar.speed = 60;
	localCar.color = "white";
	dynCar->speed = 80;
	dynCar->speedUp();

	cout << "현재 global 차의 속도는 " << globalCar.speed << endl;
	cout << "현재 local 차의 속도는 " << localCar.speed << endl;
	cout << "현재 dynamic 차의 속도는 " << dynCar->speed << endl;


	delete dynCar;		// 전역 객체의 삭제
	return 0;
}
