#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

void print(int *A, int size);
// void sort(int A[], int size);

void main(){
    srand(time(NULL));

    const int SIZE = 10;
    int A[SIZE];


    for(int i=0; i<SIZE; i++)
        A[i] = rand()%100;

    print(A,SIZE);

    sort(A, A+10);

    print(A,SIZE);
}

void print(int *A, int size){
    for(int i=0; i<size; i++)
        cout<<*(A+i)<<" ";
    cout<<endl;
}


// selection sort(선택 정렬)
// void sort(int A[], int size){

//     for(int i=0; i<size; i++){

//         int minIndex = i;           //최소값이 있는 인덱스

//         for(int j=i+1; j<size; j++){
//             //minIndex의 원소보다 보다 j의 원소가 더 작으면 minIndex는 j의 위치로 저장
//             minIndex = A[minIndex] < A[j] ? minIndex : j;
//         }

//         //minIndex가 바뀌든 안바뀌든 i 위치와 minIndex위치의 원소를 바꿈
//         int temp = A[i];
//         A[i] = A[minIndex];
//         A[minIndex] = temp;
//     }
// }