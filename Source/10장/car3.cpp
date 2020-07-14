#include <iostream>
#include <string>
using namespace std;

class Car {
private:
	int speed;		// 속도 
	int gear;		// 기어
	string color;	// 색상 
public:
	Car() 
	{
			cout << "디폴트 생성자 호출" << endl;
		speed = 0;
		gear = 1;
		color = "white";
	}
	Car(int s, int g, string c) 
	{
			cout << "매개 변수가 있는 생성자 호출" << endl;
		speed = s;
		gear = g;
		color = c;
	}
};
int main()
{
	Car c1; 		// 디폴트 생성자 호출
	Car c2(100, 0, "blue"); // 생성자 호출
	return 0;
}
