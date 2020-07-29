// �������� 3.�����͸� �̿��Ͽ� �迭 A[]�� �迭 B[]�� �����ϴ� �Լ��� �ۼ��϶�.

#include <iostream>
using namespace std;
void copy(int* A, int* B, int size);

int main() {

    const int size = 5;

    int A[size] = { 1, 2, 3, 4, 5 };
	int B[size];

	copy(A, B, size);

    for(int i=0; i<size; i++)
        cout<<B[i]<<" ";

    cout<<endl;
}

void copy(int* A, int* B, const int size) {

	for (int i = 0; i < size; i++)
        B[i] = A[i];
}

