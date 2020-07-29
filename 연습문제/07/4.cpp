#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void print(double *A, int size){
    for(int i=0; i<size; i++)
        cout<<*(A+i)<<" ";
    cout<<endl;
}

void getSumDiff(double A[], int size, double *average, double *max, double *sum){
    *sum = 0;

    for(int i=0; i<size; i++){
        *sum += A[i];
        *max = *max < A[i] ? A[i] : *max;        
    }
    
    *average = *sum / size;
}

void main(){
    srand(time(NULL));

    const int SIZE = 10;
    double A[SIZE];


    for(int i=0; i<SIZE; i++)
        A[i] = (rand()%10000 + 1) * 0.01;

    double average = 0, max = A[0], sum = 0;
    
    print(A,SIZE);
    getSumDiff(A,SIZE, &average,&max,&sum);

    cout<<"평균 : "<<average<<endl;
    cout<<"최대 : "<<max<<endl;
    cout<<"합 : "<<sum<<endl;
}