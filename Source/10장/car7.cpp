#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed; // 속도
	int gear; // 기어
	char *color; // 색상
public:
	// 첫 번째 생성자
	Car(int s, int g, char *c) {
		speed = s;
		gear = g;
		color = new char[strlen(c)+1];
		strcpy(color, c);
	}
	~Car() {
		delete [] color;
	}
};

int main()
{
	Car c(0, 1, "yellow");
	return 0;
}
