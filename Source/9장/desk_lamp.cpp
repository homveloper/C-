#include <iostream>
#include <string>
using namespace std;

class DeskLamp {
private:
	// 인스턴스 변수 정의
	bool isOn;		// 켜짐이나 꺼짐과 같은 램프의 상태

public:
	// 멤버 함수 선언
	void turnOn();	// 램프를 켠다.
	void turnOff(); // 램프를 끈다.
	void print();	// 현재 상태를 출력
};

void DeskLamp::turnOn()
{
	isOn = true;
}

void DeskLamp::turnOff()
{
	isOn = false;
}

void DeskLamp::print()
{
	cout << "램프가 " << (isOn == true ? "켜짐" : "꺼짐") << endl;
}

int main() 
{
	// 객체 생성
	DeskLamp lamp;

	// 객체의 멤버 함수를 호출하려면 도트 연산자인 .을 사용한다.
	lamp.turnOn();
	lamp.print();
	lamp.turnOff();
	lamp.print();

	return 0;
}
