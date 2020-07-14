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

void swapObjects(Car c1, Car c2)
{
	Car tmp;
	tmp = c1;
	c1 = c2;
	c2 = tmp;
	c1.display();
	c2.display();
}

int main()
{
	Car mine(0, 1, "white");
	Car yours(0, 1, "red");
	swapObjects(mine, yours);
	mine.display();
	yours.display();

	return 0;
}	
