#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	// 3개의 멤버 변수 선언
	int speed; // 속도
	int gear; // 주행거리
	string color; // 색상

	// 3개의 멤버 함수 선언 
	void setGear(int newGear) { // 기어 설정 멤버 함수
		gear = newGear;
	}
	void speedUp(int increment) { // 속도 증가 멤버 함수
		speed += increment;
	}
	void speedDown(int decrement) { // 속도 감소 멤버 함수
		speed -= decrement;
	}
};

// Car 클래스를 상속받아서 다음과 같이 SportsCar 클래스를 작성하여 보자. 
class SportsCar : public Car {		// Car를 상속받는다.
	// 1개의 멤버 변수를 추가
    bool turbo;	
 
public: 	
	// 1개의 멤버 함수를 추가
	void setTurbo(bool newValue) { // 터보 모드 설정 멤버 함수
		turbo = newValue;
	}
};
