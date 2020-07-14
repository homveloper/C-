#include <iostream>
#include <string>
using namespace std;
class Car {
	int speed; // 속도
	int gear; // 기어
	string color; // 색상
public:
	// 첫 번째 생성자
	Car(int s, int g, string c) {
		speed = s;
		gear = g;
		color = c;
	}
	// 색상만 주어진 생성자
	Car(string c) {
		Car(0, 0, c);		// 첫 번째 생성자를 호출한다. 
	}
};

int main()
{
	Car c1("white");
	return 0;
}
