#include <iostream>
using namespace std;

class Rectangle {

private:
	int width;
	int height;

public:
	int initialize(int width, int height){
		this->width = width;
		this->height = height;
	}

	int calArea() {
		return width * height;
	}
};


int main() {
	Rectangle rectangle;
	int width;
	int height;
	cout << "enter the width, height" << endl;
	cin >> width >> height;
	rectangle.initialize(width,height);
	cout << rectangle.calArea() << endl;
}