#include <iostream>
#include <string>
using namespace std;

class Car {	
public:
	int speed;
	int gear;
	string color;
	Car(): speed(0), gear(1), color("white") { }
	void setSpeed(int s){ speed = s; }
	int getSpeed(){ return speed; }
};

class SportsCar : public Car {	
public:
	int speed;
	int gear;
	string color;
	SportsCar(): speed(100), gear(3), color("blue") { }
};

int main()
{
	SportsCar sc;
	cout << "스피드: " << sc.speed << endl;		// 자식 클래스의 speed
	cout << "스피드: " << sc.Car::speed << endl;	// 부모 클래스의 speed
	cout << "스피드: " << sc.getSpeed() << endl;	// 부모 클래스의 speed 반환
	return 0;
}
