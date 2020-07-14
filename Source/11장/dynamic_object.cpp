#include <iostream>
#include <string>
using namespace std;

class Car {
       int speed;
       int gear;
       string color;
 public:
       Car(int s=0, int g=1, string c="white") : speed(s), gear(g), color(c) {
       }
		void display();
};
void Car::display()
{
	cout << "속도: " << speed << " 기어: " << gear << " 색상: " << color << endl;
}

int main()
{
	Car myCar;			// 정적 메모리 할당으로 객체 생성
	myCar.display();

	Car *pCar = &myCar;		// 객체 포인터로 객체를 가리키게 함
	pCar->display();

	pCar = new Car(0, 1, "blue");		// 동적 메모리 할당으로 객체 생성
	pCar->display();
	return 0;
}		
