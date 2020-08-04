//  �������� 2.���Ҽ��� ��Ÿ���� Complex Ŭ������ �ۼ��غ���. ���Ҽ��� �Ǽ��ο� ����η� �̿췯����. �ʿ��� ��������� getter(������), setter(������)�� �����϶�.
// �׸��� 12.0 + 17.9i�� ���� ���Ҽ��� ����ϴ� print() ��� �Լ��� �����϶�. �׸��� ���Ҽ��� ���� ������ ���� ������ �ϴ� �Լ��� ����� �׽�Ʈ�϶�.

#include <iostream>
#include <string>
using namespace std;

class Complex {
private:
	double real;
	double image;

public:
	void complex(double r, double i);
	void print();
	void setNum(double R, double I);
    void add(Complex c);
};

void Complex::complex(double r, double i) {
	real = r;
	image = i;
}

void Complex::print() {
	cout << real << "+" << image << "i" << endl;
}

void Complex::setNum(double R, double I) {
	real = R;
	image = I;
}

void Complex::add(Complex c) {
    this->real += c.real;
    this->image += c.image;
}

int main() {
	Complex c1, c2;

    c1.complex(0,0);
	c2.complex(2,3);

    c1.add(c2);
    c1.print();
}
