#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

void sort(int A[], int size){
	// create array //
	for (int i = 0; i<size;i++){
		*(A+i)=rand()%10;
		cout<<*(A+i)<<"  ";
	}
	cout<<endl;
	
	int TEMP1;
	int TEMP2;
	// sort array //
	for (int j = 1; j<size;j++){
		for (int i = 0; i<size-1;i++){
			TEMP1 = max(*(A+i),*(A+i+1));
			TEMP2 = min(*(A+i),*(A+i+1));
			*(A+i)=TEMP1;
			*(A+i+1)=TEMP2;
		}
	}
	
	for (int i =0 ; i<size ; i++){
		cout<<*(A+i)<<" ";
	}
}

int main(){
	int A[5];
	sort(A,5);
}
