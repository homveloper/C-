#include <iostream>
using namespace std;

void copy(int *A,int *B, int size){
	for (int i=0 ; i<size ; i++){
		*(B+i)=*(A+i);
		cout<<*(B+i)<<endl;
	}
}

int main(){
	int size = 5;
	int A[size] = { 1 , 2 , 3 , 4, 5 };
	int B[size] = { 2, 3 , 4 , 5 , 6 };
	copy(A,B,size);
}
