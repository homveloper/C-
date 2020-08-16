#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
	int x, y;
	int circumference;
	int height, width;
public:
	Shape();
	~Shape();
	void getArea() {
	}
	void getCircumference() {
	}
};

class Ellipse :public Shape{
private:


public:
	double getCircumference(int height, int width) {
		circumference = 2 * (height + width);
		
	}

	double getArea(int height, int width) {
		return height * width;
	}
};

class Rectangle : public Shape {
private:
	int base;
public:
	double getArea() {
		return 0.5 * (base * height);
	}
};

int main() {
	Rectangle Rc;
	cout << "사각형 둘레 : " << Rc.getCircumference() << "사각형 넓이 : " << Rc.getArea() << endl;
	Ellipse Ta;
	cout << " 삼각형 넓이 : " << Ta.getArea() << endl;
}