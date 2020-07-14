#include <iostream>
using namespace std;

class Car {
public:
	int getSpeed();
	void setSpeed(int s);
	void honk();
private:       
	int speed;		//加档
};

int Car::getSpeed()
{
	return speed;
}
void Car::setSpeed(int s)
{
	speed = s;
}
void Car::honk()
{
	cout << "户户!" << endl;
}

int main()
{
	Car myCar;
	myCar.setSpeed(80);
	myCar.honk();
	cout << "泅犁 加档绰 " << myCar.getSpeed() << endl;
	return 0;
}
