#include <iostream>
using namespace std;
int main() {
	int* p = (int*)1000;
	double* q = (double*)2000;

	// 1. p+3 = p의 주소 + 12
	// 2. p-2 = p의 주소 -8
	// 3. q+5 = q의 주소 +40
	// 4. q-1 = q의 주소 -8

	cout << "p = " << p<<endl;
	cout << "q = " << q << endl;
	cout << "p+3 = " << p + 3 << endl;
	cout << "p-2 = " << p - 2 << endl;
	cout << "q+5 = " << q + 5 << endl;
	cout << "q-1 = " << q - 1 << endl;
}