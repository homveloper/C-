#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double pi()
{
    return std::atan(1) * 4;
}

class Point
{
    int x, y;

public:
    Point()
    {
        Point(0, 0);
    }

    Point(int x, int y) : x(x), y(y)
    {
    }

    void setX(int x)
    {
        this->x = x;
    }

    int getX()
    {
        return x;
    }

    void setY(int y)
    {
        this->y = y;
    }

    int getY()
    {
        return y;
    }
};

class Shape
{
protected:
    Point point;

public:
    Shape(Point point) : point(point)
    {
    }

    void move(int x, int y)
    {
        point.setX(x);
        point.setY(y);
    }

    virtual double getArea() = 0;
    virtual void draw() = 0;
};

class Rectangle : public Shape
{
private:
    int width, height;

public:
    Rectangle(Point point, int width, int height) : Shape(point)
    {
        this->width = width;
        this->height = height;
    }

    void setWidth(int w)
    {
        width = w;
    }

    int getWidth()
    {
        return width;
    }

    void setHeight(int h)
    {
        height = h;
    }

    int getHeight()
    {
        return height;
    }

    virtual double getArea()
    {
        return width * height;
    }

    virtual void draw()
    {
        cout << "Rectangle Draw" << endl;
        cout << "x, y = " << point.getX() << ", " << point.getY() << endl;
        cout << "width = " << width << endl;
        cout << "height = " << height << endl;
    }
};

class Ellipse : public Shape
{
    int a; //긴 반지름
    int b; //짧은 반지름
public:
    Ellipse() : Shape(Point(0, 0))
    {
        a = b = 1;
    }

    Ellipse(Point point, int a, int b) : Shape(point), a(a), b(b)
    {
    }

    void setA(int a)
    {
        this->a = a;
    }

    int getA()
    {
        return a;
    }

    void setB(int b)
    {
        this->b = b;
    }

    int getB()
    {
        return b;
    }

    virtual double getArea()
    {
        return a * b * pi();
    }

    virtual void draw()
    {
        cout << "Ellipse Draw" << endl;
        cout << "x, y = " << point.getX() << ", " << point.getY() << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

class Ellipse : public Shape
{
    int width;
    int height;

public:
    Ellipse() : Shape(Point(0, 0))
    {
        width = 1;
        height = 1;
    }

    Ellipse(Point point, int width, int height) : Shape(Point(point))
    {
        this->width = width;
        this->height = height;
    }

    virtual double getArea()
    {
        return width * height / 2;
    }
 
    virtual void draw()
    {
        cout << "Triangle Draw" << endl;
        cout << "x, y = " << point.getX() << ", " << point.getY() << endl;
        cout << "width = " << width << endl;
        cout << "height = " << height << endl;
    }
};

void main()
{
    Shape* shapes[3] = {
        new Ellipse(Point(0,0),5,8),
        new Rectangle(Point(1,1),2,2),
        new Ellipse(Point(5,10),2,4)
    };

    for(int i=0; i<3; i++){
        shapes[i]->draw();
        shapes[i]->move(i,i*2);
        shapes[i]->draw();
        cout<<"넓이 : "<<shapes[i]->getArea()<<endl;

        cout<<endl;
    }
} 