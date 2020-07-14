#include <iostream>
#include <string>
using namespace std;

class Car {
private:
	int speed;		// 속도 
	int gear;		// 기어
	string color;		// 색상 

public:
	Car(int s, int g, string c) 
	{
		speed = s;
		gear = g;
		color = c;
	}
	void printInfo();
};
void Car::printInfo()
{
	cout << "속도: " << speed << endl;
	cout << "기어: " << gear << endl;
	cout << "색상: " << color << endl;
}

int main()
{
	Car c1(0, 1, "red"); 	  	// 생성자 호출
	Car c2 = Car(0, 1, "blue"); 	// 이런 식으로도 생성자 호출이 가능하다. 
	c1.print();
	c2.print();
	return 0;
}
