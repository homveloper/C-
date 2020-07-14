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
	Vector operator+(Vector& v2)
	{
		Vector v(0.0, 0.0);
		v.x = this->x + v2.x;
		v.y = this->y + v2.y;
		return v;
	}	
	void display()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

int main()
{
	Vector v1(1.0, 2.0), v2(3.0, 4.0);
	Vector v3 = v1 + v2;
	v3.display();

	return 0;
}
