#include <iostream>
using namespace std;

class Complex
{
private:
	double real;		// 실수부
	double imag;	// 허수부

public:
	Complex();		// 생성자
	Complex(double a, double b); // 생성자
	~Complex();		// 소멸자

	double getReal();	// 실수부를 반환한다.
	double getImag();	//허수부를 반환한다.
	Complex add(const Complex& c);	// 복소수의 덧셈 연산을 구현한다. 
	void print();		// 복소수를 출력한다. 
};

Complex::Complex()
{
	real = 0;
	imag = 0;
}

Complex::Complex(double a, double b)
{
	real = a;
	imag = b;
}

Complex::~Complex()
{
}

double Complex::getReal()
{
	return(real);
}

double Complex::getImag()
{
	return(imag);
}
// 복소수의 덧셈 연산 구현
Complex Complex::add(const Complex& c)
{
	Complex temp;	// 임시 객체
	temp.real = this->real + c.real;
	temp.imag = this->imag + c.imag;

	return(temp);	// 객체를 반환한다.
}

void Complex::print()
{
	cout << real << " + " << imag << "i" << endl;
}

int main(void)
{
	Complex x(2, 3), y(4, 6), z;

	cout << "첫번째 복소수 x: ";
	x.print();

	cout << "두번째 복소수 y: ";
	y.print();

	z = x.add(y);		// z = x + y

	cout << " z = x + y = ";
	z.print();

	return(0);
}
