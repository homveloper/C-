#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
	int x, y;

public:
	void setOrigin(int x, int y){
		this->x = x;
		this->y = y;
	}
	virtual void draw() { 	
		cout <<"Shape Draw" << endl;	
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
	virtual void draw() {
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