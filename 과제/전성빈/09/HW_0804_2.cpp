#include <iostream>
using namespace std;

class Complex {
private:
	float Real_No;
	float Imaginary_No;

public:
	void print();
	void add();
	void init(){
		Real_No = 0;
		Imaginary_No = 0;
	}
};

void Complex::print() {
	cout << Real_No << " + " << Imaginary_No << "i" << endl;
}

void Complex::add() {
}

void main() {
	Complex complex;
	complex.init();
	cout << "enter the Real_No, Imaginary_No" << endl;
	complex.print();
}
