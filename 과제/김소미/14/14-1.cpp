//�������� 1.14�忡 �����ϴ� Shape��� Ŭ������ �߰��� move(), getArea() �Լ��� ��� ���� �Լ��� �����϶�. move()�� ������ ������(x,y)�� �̵��Ѵ�. getArea()�� ������ ������ ���Ѵ�.
//Rectangle, Ellipse(Ÿ��), Triangle Ŭ������ Shape Ŭ������ ��ӹ޾Ƽ� �ۼ��ȴ�.
//Shape * ������ �迭�� �����Ҵ��Ͽ� �پ��� ���� ��ü�� ä���. ������ �׸���, ������ ����ϸ�, ������ �̵��Ͽ� ����.

#include <iostream>
#include "Point.h"
#include <cmath>
using namespace std;

class IOHandler{

public:
	int getInteger(const char *message){
		int i;
		cout<<message;
		cin>>i;

		return i;
	}
	double getDouble(const char *message){
		double d;
		cout<<message<<endl;
		cin>>d;

		return d;
	}
};


class Shape {
protected:
	Point point;

public:
	Shape(Point point){
		this->point = point;
	}

	virtual void draw() = 0;
	virtual double getArea() = 0;

	virtual void move(int x = 0, int y = 0) {
		this->point.setX(x);
		this->point.setY(y);
	}

	Point& getPoint(){
		return point;
	}

	// 'r' 'c' 't' 'e'
	// static Shape& createShape(char c, Point point){
	// 	Shape *temp;
	// 	IOHandler ioh;

	// 	if(c =='r'){
	// 		int height = ioh.getInteger("높이 : ");
	// 		int width = ioh.getInteger("너비 : ");
	// 		temp = new Rectangle(point,width,height);
	// 	}else if(c =='e'){
	// 		int a = ioh.getInteger("장반경 : ");
	// 		int b = ioh.getInteger("단반경 : ");
	// 		temp = new Ellipse(point,a,b);
	// 	}else if(c =='t'){
	// 		int height = ioh.getInteger("높이 : ");
	// 		int width = ioh.getInteger("너비 : ");
	// 		temp = new Triangle(point,width,height);
	// 	}

	// 	return *temp;
	// }
};

class Rectangle : public Shape {
private:
	int width, height;

public:
	Rectangle() : Shape(Point(0,0)){
		width = height = 1;
	}

	Rectangle(Point point, int width = 1, int height= 1) : Shape(point){
		this-> width = width;
		this->height = height;
	}

	void setWidth(int width){
		this->width = width;
	}

	int getWidth(){
		return width;
	}

	void draw(){
		cout<<"사각형"<<endl;
		cout<<"x,y : "<<point.getX()<<", "<<point.getY()<<endl;
	}

	double getArea(){
		return width * height;
	}

};

class Triangle : public Shape {
private:
	int width, height;

public:
	Triangle() : Shape(Point(0,0)){
		width = height = 1;
	}

	Triangle(Point point, int width = 1, int height= 1) : Shape(point){
		this-> width = width;
		this->height = height;
	}

	void setWidth(int width){
		this->width = width;
	}

	int getWidth(){
		return width;
	}

	void draw(){
		cout<<"삼각형"<<endl;
		cout<<"x,y : "<<point.getX()<<", "<<point.getY()<<endl;
	}

	double getArea(){
		return width * height / 2;
	}
};

class Ellipse : public Shape {
private:
	int a, b;

public:
	Ellipse() : Shape(Point(0,0)){
		a = b = 1;
	}

	Ellipse(Point point, int a = 1, int b= 1) : Shape(point){
		this-> a = a;
		this->b = b;
	}

	void setA(int a){
		this->a = a;
	}

	int getA(){
		return a;
	}

	void draw(){
		cout<<"타원"<<endl;
		cout<<"x,y : "<<point.getX()<<", "<<point.getY()<<endl;
	}

	double getArea(){
		return a * b * atan(1) * 4;
	}
};


void main(){
	// Shape* shapes[3] = {
	// 	&Shape::createShape('r',Point(0,0)),
	// 	&Shape::createShape('c',Point(0,0)),
	// 	&Shape::createShape('t',Point(0,0))
	// };

	// for(int i=0; i<3; i++){
	// 	shapes[i]->draw();
	// 	cout<<"넓이 : "<<shapes[i]->getArea()<<endl;
	// 	Point point = shapes[i]->getPoint();
	// 	shapes[i]->move(point.getX() + 1, point.getY() + 1);
	// }

}