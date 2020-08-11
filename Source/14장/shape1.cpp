#include <iostream>
using namespace std;

class Shape {		// 일반적인 도형을 나타내는 부모 클래스
protected:
	int x, y;

public:
	void draw() {
		cout <<"Shape Draw" << endl;
	}
	void setPosition(int x, int y){
		this->x = x;
		this->y = y;
	}
};

class Rectangle : public Shape {
private: 
	int width, height;

public: 
	void setWidth(int w) {
		width = w;
	}
	void setHeight(int h) {
		height = h;
	}
	void draw() {
		cout << "Rectangle Draw"<< endl;
	}
};

class Circle : public Shape {
private: 
	int radius;

public: 
	void setRadius(int r) {
		radius = r;
	}
	void draw() {
		cout << "Circle Draw"<< endl;
	}
};

int main()
{
	Shape *ps = new Rectangle();		// OK!
	ps->setPosition(10, 10);
	ps->draw();
	((Rectangle *)ps)->setWidth(100); 	// Rectangle의 setWidth() 호출
	delete ps;

	Circle c;
	Shape &s = c;			 // OK!
	s.setPosition(10, 10);
	s.draw();
	((Circle *)ps)->setRadius(5); 		// Circle의 setRadius() 호출
}
