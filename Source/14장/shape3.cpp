#include <iostream>
using namespace std;

class Shape {
protected:
	int x, y;

public:
	virtual void draw() {
		cout <<"Shape Draw";
	}
	void setOrigin(int x, int y){
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
		cout << "Rectangle Draw" << endl;
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
		cout << "Circle Draw" << endl;
	}
};

class Triangle: public Shape {
private: 
	int base, height;

public: 
	void draw() {
		cout << "Triangle Draw" << endl;
	}
};


int main()
{
	Shape *arrayOfShapes[3];

	arrayOfShapes[0] = new Rectangle();
	arrayOfShapes[1] = new Triangle();
	arrayOfShapes[2] = new Circle();
	for (int i = 0; i < 3; i++) {
		arrayOfShapes[i]->draw();
	}
}
