#include <iostream>
#include "car.h"		// 현재 위치에 car.h를 읽어서 넣으라는 것을 의미한다. 
using namespace std;

int main()
{
	Car myCar;
	myCar.setSpeed(80);
	myCar.honk();
	cout << "현재 속도는 " << myCar.getSpeed() << endl;
	return 0;
}
