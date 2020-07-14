#include <iostream>
#include <string>
using namespace std;

class Shape {
	int x, y;
public:
	Shape() {	
		cout << "Shape 持失切() " << endl;
	}
	~Shape() {	
		cout << "Shape 社瑚切() " << endl;
	}
};

class Rectangle : public Shape {
	int width, height;
public:
	Rectangle(){		
		cout << "Rectangle 持失切()" << endl;
	}
	~Rectangle(){		
		cout << "Rectangle 社瑚切()" << endl;
	}
};
int main()
{
	Rectangle r;
	return 0;
}
