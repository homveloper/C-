#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void print(int a[], int size);
void add(int a[], int b[], int size);

void main(){
    srand(time(NULL));

    const int size = 3;

    int a[size];
    int b[size];

    for(int i=0; i<size; i++){
        a[i] = rand() % 5;
        b[i] = rand() % 5;
    }

    print(a,size);
    print(b,size);

    add(a,b,size);

    print(a,size);
}

void print(int a[], int size){
    cout<<"( ";
    for(int i=0; i<size; i++){
        cout<<a[i];

        if(i != size-1)
            cout<<", ";
    }


    cout<<" )"<<endl;
}

void add(int a[], int b[], int size){
    
    for(int i=0; i<size; i++)
        a[i] += b[i];
}