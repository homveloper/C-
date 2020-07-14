#include <iostream>
using namespace std;

class Vector
{
private:
	double x, y;
public:
	Vector(double x, double y){
		this->x = x;
		this->y = y;
	}
	friend Vector operator+(const Vector& v1, const Vector& v2);
	void display()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

Vector operator+(const Vector& v1, const Vector& v2)
{
	Vector v(0.0, 0.0);
	v.x = v1.x + v2.x;
	v.y = v1.y + v2.y;
	return v;
}	

int main()
{
	Vector v1(1, 2), v2(3, 4);
	Vector v3 = v1 + v2;
	v3.display();

	return 0;
}
