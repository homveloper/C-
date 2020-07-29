#include <iostream>
using namespace std;
#include <cstdlib>

void sort(int A[], int size){
	// create array //
	for (int i = 0; i<size;i++){
		*(A+i)=rand()%10;
		cout<<*(A+i)<<endl;
	}
	int B[size];
	int ARRAY_MAX=0;
	int ARRAY_MIN=10;
	// sort array //
	for (int i = 0; i<size;i++){
		for (int j = 0; j<size-2i,j++){
			ARRAY_MAX = max(ARRAY_MAX,*(A+i));
			ARRAY_MIN = min(ARRAY_MIN,*(A+i));
		}		
	}
}

int main(){
	int A[1];
	sort(A,4);
}
