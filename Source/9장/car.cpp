#include <iostream>
#include "car.h"
using namespace std;

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
	cout << "»§»§!" << endl;
}
