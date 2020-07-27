#include <iostream>
using namespace std;

void increase(int *i){

    int *arr = new int[100];

    delete[] arr;
}

int main()
{
    int i = 10;

    while(1){
        increase(&i);
    }
}