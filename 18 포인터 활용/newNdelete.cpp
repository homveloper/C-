#include <iostream>
using namespace std;

void main(){
    int* a = new int(1);

    int* arr = new int[2]{2,3};

    cout<<*a<<endl;

    for(int i=0; i<2; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    delete a;
    delete[] arr;

    delete a;
}