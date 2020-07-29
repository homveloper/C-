#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void copy(int *A, int *B, int size){
    for(int i=0; i<size; i++)
        *(B+i) = *(A+i);
}

void print(int *A, int size){
    for(int i=0; i<size; i++)
        cout<<*(A+i)<<" ";
    cout<<endl;
}

void main(){
    srand(time(NULL));

    const int SIZE = 10;
    int A[SIZE];
    int B[SIZE];

    for(int i=0; i<SIZE; i++)
        A[i] = rand() % 10;

    print(A,SIZE);
    copy(A,B,SIZE);
    print(B,SIZE);
}