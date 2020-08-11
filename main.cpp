#include <iostream>
#include <string>
using namespace std;

class HomeAppliance{
private:
	string model;
	string manufacturer;
public:
	virtual int getPrice() = 0;
};

class Television : public HomeAppliance{

};

class Refrigerator : public HomeAppliance{

};