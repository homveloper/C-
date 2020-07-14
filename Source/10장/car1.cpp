#include <iostream>
#include <string>
using namespace std;

class Car {
private:
	int speed; // 속도
	int gear; // 기어
	string color; // 색상
public:
	Car() 
	{
		cout << "디폴트 생성자 호출" << endl;
		speed = 0;
		gear = 1;
		color = "white";
	}
};
int main()
{
	Car c1; // 디폴트 생성자 호출
	return 0;
}
