//연습문제 1.1차원 배열은 벡터라고도 불린다.
//2개 벡터를 더하는 함수인 void add(int a[], int b[], int size)를 작성하라. 두 벡터의 합은 배열 a에 저장된다.

#include <iostream>
#include <time.h>
#include <stdio.h>
using namespace std;
void add(int a[], int b[], int size);
void print(int a[], int size);

int main() {
	srand(time(NULL));
	const int size = 3;
	int a[size] = { rand() % 50, rand() % 50, rand() % 50 };
	int b[size] = { rand() % 50, rand() % 50, rand() % 50 };

	add(a, b, size);
}

void add(int a[], int b[], int size) {
	for (int i = 0; i < size; i++)
	{
		a[i] += b[i];
		cout << "a[" << i+1 << "]은" << a[i] <<", b["<<i+1<<"]은"<<b[i]<<"이므로 합 a"<<i+1<<"+ b"<<i+1<<"는 "<<a[i]<< endl;
	}
}

void print(int a[], int size){
	cout<<"(";

	for(int i=0; i<size; i++){
		cout<<a[i];

		if(i!= size-1)
			cout<<", ";
	}

	cout<<")"<<endl;
}

