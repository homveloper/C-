#include <iostream>
#include <string>
using namespace std;

class Car {
private:
	int speed;		// 속도 
	int gear;		// 주행 거리
	string color;	// 색상 
public:
	Car() 
	{
		cout << "생성자 호출" << endl;
		speed = 0;
		gear = 1;
		color = "white";
	}
	~Car() 
	{
		cout << "소멸자 호출" << endl;
	}
};
int main()
{
	Car c1; // 디폴트 생성자 호출
	return 0;
}
