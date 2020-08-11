#include <iostream>

using namespace std;

class Shape
{
protected:
	
public:
	Shape(int w, int h) : width(w), height(h) {}
    Shape(){
        Shape(0,0);
    }
    double getArea();
    void print(){
        
    }
};

class Triangle : public Shape
{
    int width;
	int height;
    public:
        double getArea(){
            return width*height/2;
        }
};

class Ranctangle : public Shape
{
    int width;
	int height;

    public:
        double getArea(){
            return width*height;
        }
};

class Circle : public Shape
{
    const double PI=3.141592;

    double radius;

    public:
        double getArea(){
            return (height/2)*(height/2)*PI;
        }
};

void main(){
    Circle c;
    c.print();
}