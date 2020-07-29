#include <iostream>
using namespace std;

void copy(int* A, int* B, int size) {
	for (int i = 0; i < size; i++) {
		*(B + i) = *(A + i);
	}
}

int main() {
	const int size = 5;
	int A[size];
	int B[size];

	copy(A, B, size);

	cout << *A << endl;
	cout << *(A + 1) << endl;
	cout << *(A + 2) << endl;
	cout << *(A + 3) << endl;
	cout << *(A + 4) << endl;

	cout << "=====================" << endl;

	cout << *B << endl;
	cout << *(B + 1) << endl;
	cout << *(B + 2) << endl;
	cout << *(B + 3) << endl;
	cout << *(B + 4) << endl;


}