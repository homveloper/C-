#include <iostream>
using namespace std;

class Complex {
public:
	friend Complex add (Complex, Complex);
	Complex (double r, double i) {re=r; im=i; }
	Complex(double r) { re=r; im=0; }
	Complex () { re = im = 0; }
	void Output(){
		cout << re << " + " << im <<"i" << endl;
	}

private:
	double re, im;
};

Complex add(Complex a1, Complex a2)
{
	return Complex (a1.re+a2.re, a1.im+a2.im);
}

int main()
{
	Complex c1(1,2), c2(3,4);
	Complex c3 = add(c1, c2);
	c3.Output();
	return 0;
}
