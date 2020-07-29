#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void print(int *A, int size);
void sort(int A[], int size);
void merge(int *A, int *B, int *C, int SIZE);

void main(){
    srand(time(NULL));

    const int SIZE = 5;
    int A[SIZE];
    int B[SIZE];
    int C[SIZE*2] = {0};

    for(int i=0; i<SIZE; i++){
        A[i] = rand()%10;
        B[i] = rand()%10;
    }

    sort(A,SIZE);
    sort(B,SIZE);

    print(A,SIZE);
    print(B,SIZE);

    merge(A,B,C,SIZE);

    print(C,SIZE*2);
}

void merge(int *A, int *B, int *C, int SIZE){

    int i =0;   //배열 A의 인덱스를 표시
    int j =0;   //배열 B의 인덱스를 표시
    int k =0;   //배열 C의 인덱스를 표시

    for(k=0; k<SIZE * 2 && i < SIZE && j < SIZE; k++){
        C[k] = A[i] < B[j] ? A[i++] : B[j++];
    }

    // 만약 두 배열 A,B 중 하나의 값이 전부 C에 들어간다면
    // 나머지를 배열 C에 대입
    if(i == SIZE){
        for(; k<SIZE * 2 && j<SIZE; k++){
            C[k] = B[j++];
        }
    }else if(j == SIZE){
        for(; k<SIZE * 2 && i<SIZE; k++){
            C[k] = A[i++];
        }
    }
}

void print(int *A, int size){
    for(int i=0; i<size; i++)
        cout<<*(A+i)<<" ";
    cout<<endl;
}

// selection sort(선택 정렬)
void sort(int A[], int size){

    for(int i=0; i<size; i++){

        int minIndex = i;           //최소값이 있는 인덱스

        for(int j=i+1; j<size; j++){

            //minIndex의 원소보다 보다 j의 원소가 더 작으면 minIndex는 j의 위치로 저장
            minIndex = A[minIndex] < A[j] ? minIndex : j;
        }

        //minIndex가 바뀌든 안바뀌든 i 위치와 minIndex위치의 원소를 바꿈
        int temp = A[i];
        A[i] = A[minIndex];
        A[minIndex] = temp;
    }
}