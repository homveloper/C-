#include <iostream>
#include <string>
using namespace std;

class Shape {
	int x, y;
public:
	Shape() {	
		cout << "Shape 持失切() " << endl;
	}
	Shape(int xloc, int yloc) : x(xloc), y(yloc){	
		cout << "Shape 持失切(xloc, yloc) " << endl;
	}
	~Shape() {	
		cout << "Shape 社瑚切() " << endl;
	}
};

class Rectangle : public Shape {
	int width, height;
public:
	Rectangle(int x=0, int y=0, int w=0, int h=0);
	~Rectangle(){		
		cout << "Rectangle 社瑚切()" << endl;
	}
};
Rectangle::Rectangle(int x, int y, int w, int h) : Shape(x, y) {		
		width = w;
		height = h;
		cout << "Rectangle 持失切(x, y, w, h)" << endl;
}

int main()
{
	Rectangle r(0, 0, 100, 100);
	return 0;
}
