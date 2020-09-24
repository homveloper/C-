#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int* getArray(int size){
    int *arr = new int[size];

    while(size--)
        arr[size] = rand() % 10 + 1;

    return arr;
}

void print(int *arr,int offset, int size){
    for(int i=offset; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void main(){
    srand(time(NULL));

    int* arr= getArray(5);
    
    print(arr,0,5);


}  