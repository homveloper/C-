#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void init(int* arr, int offset,int size){
    for(int i=offset; i<size; i++){
        arr[i] = (rand() % 10) + 1;
    }
}

void print(int *arr,int offset, int size){
    for(int i=offset; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void resize(int *arr,int& size){

    int *temp = new int[size];

    for(int i=0; i<size; i++){
        temp[i] = arr[i];
    }

    delete[] arr;

    size *= 2;

    arr = new int[size];

    for(int i=0; i<size/2; i++){
        arr[i] = temp[i];
    }
    delete[] temp;
}

void resize2(int *arr,int& size){
    int *temp = arr;

    size *= 2;
    arr = new int[size];

    for(int i=0; i<size/2; i++){
        arr[i] = temp[i];
    }
    delete[] temp;
}

int main(){
    srand(time(NULL));

    int size = 10;
    int* arr = new int[size];

    init(arr,0,size);
    print(arr,0,size);
    resize2(arr, size);

    init(arr,size/2,size);
    print(arr,0,size);
}