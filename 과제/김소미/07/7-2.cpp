// �������� 2.������ ���� ����Ǿ� �ִ� ���, ���� ������ ���� ���ΰ�?

#include <iostream>
using namespace std;

int main() {
	int i = 1000;
	int *p = &i;
	
	double j = 2000;
	double *q = &j;


	cout << "p =" << p << endl;
	cout << "q =" << q << endl;
	//1. p+3=?
	cout <<"p+3 = "<< p + 3 << endl;
	//2. p-2=
	cout << "p-2 = " << p - 2 << endl;
	//3. q+5=
	cout << "q+5 = " << q + 5 << endl;
	//4. q-1=
	cout << "q-1 = " << q - 1 << endl;
}