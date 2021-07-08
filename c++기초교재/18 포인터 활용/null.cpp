#include <iostream>
using namespace std;

void print(int* arr, int offset, int size) {
    for (int i = offset; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void main() {
    int* a = new int[3]{ 4,5,6 };

    if(a != NULL)
        print(a, 0, 3);

    delete[] a;
    a = NULL;

    if (a != NULL)
        print(a, 0, 3);
}