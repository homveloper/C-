//�������� 2.�м��� ��Ÿ���� Ŭ���� Fraction�� �����Ѵ�. Fraction Ŭ������ numer(����), denom(�и�)�� ��������� ������.
//�ʿ��� ��� �Լ��� ������, �Ҹ��ڸ� �����Ͽ���. Fraction ��ü�� �������� �����ڸ� ����� �� �ֵ��� �����ڸ� �ߺ� ���� �϶�.
//Ŭ���� �ܺο� �Ϲ� �Լ��� �����ϰų� Ŭ���� ������ ��� �ϼ��� �����ص� �ȴ�.

#include <iostream>
#include <string>
using namespace std;

class Fraction
{
private:

public:
	int numer, denom;

	Fraction(int n, int d) {

		if(d !=0 ){
			numer = n;
			denom = d;
			cout << numer << "/" << denom << endl;
		}else{
			cout<<"error : denom can`t set 0"<<endl;
		}
	}

	~Fraction() {
		cout << "�Ҹ��� ȣ��" << endl;
	}

	// 최대 공약수
    int gcd(int a, int b)
    {
        int c;
        while (b != 0)
        {
            c = a % b;
            a = b;
            b = c;
        }
        return a;
    }

    // 최소 공배수
    int lcm(int a,int b)
    {
        return a * b / gcd(a, b);
    }

	Fraction operator+(const Fraction& f);
	friend Fraction operator+(const Fraction& f1, const Fraction& f2);
};

Fraction Fraction::operator+(const Fraction& f){
	if(denom == f.denom){
		return Fraction(numer + f.numer , denom);
	}else{
		int lcmNUM = lcm(denom, f.denom);
		return Fraction(numer * lcmNUM / denom + f.numer * lcmNUM / f.denom, lcmNUM);
	}
}


Fraction operator+(const Fraction& f1, const Fraction& f2) {
	Fraction f(0.0, 0.0);
	f.numer = f1.numer + f2.numer;
	f.denom = f1.denom + f2.denom;
	return f;
}

int main() {
	Fraction f1(1, 11), f2(2, 6);
	Fraction f3 = f1 + f2;

	cout<<f3.numer<<"/"<<f3.denom<<endl;
	return 0;
}