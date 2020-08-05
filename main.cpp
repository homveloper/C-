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

	Vector operator+(const Vector& v2) const;
	friend ostream& operator<<(ostream& os, const Vector &v);
    friend istream& operator>>(istream& is,Vector &v);

	void display(){
		cout << "(" << x << "," << y << ")" << endl;
	}
};

// << 연산자의 중복 정의
ostream& operator<<(ostream& os, const Vector &v)
{
	os << "(" << v.x << "," << v.y << ")" << endl;
	return os;
}

istream& operator>>(istream& is, Vector &v){
    is >> v.x >> v.y;
    return is;
}

Vector Vector::operator+(const Vector& v2) const
{
    Vector v(0.0, 0.0);
    v.x = this->x + v2.x;
    v.y = this->y + v2.y;
    return v;
}

int main()
{
	Vector v1(1.0, 2.0), v2(3.0, 4.0);
	Vector v3 = v1 + v2;
	cout << v1 << v2 << v3;

	return 0;
}