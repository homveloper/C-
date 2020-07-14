#include <iostream>
using namespace std;

class Car {
	int speed;
	int gear;
	string color;
	int id;        // 자동차의 시리얼 번호

public:
	// 실체화된 Car 객체의 개수를 위한 정적 변수
	static int numberOfCars;
	Car(int s=0, int g=1, string c="white"): speed(s), gear(g), color(c) {
		// 자동차의 개수를 증가하고 id 번호를 할당한다.
		id = ++numberOfCars;
	}
};
int Car::numberOfCars = 0;

int main()
{
	Car c1;
	cout << Car::numberOfCars << endl;

	Car c2;
	cout << c2.numberOfCars << endl;
}
