#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void initialize(int vector_a[], int size);
void print(int a[], int size);
int dotProduct(int vector_a[], int vector_b[], int size);


int main() {
	srand(time(NULL));
	const int size = 3;
	int vector_a[size];
	int vector_b[size];

	int consequence = 0;

	initialize(vector_a,size);
	initialize(vector_b,size);

	print(vector_a,size);
	print(vector_b,size);

	consequence = dotProduct(vector_a, vector_b, size);
	cout<<consequence<<endl;
}

int dotProduct(int vector_a[], int vector_b[], int size) {
	int consequence = 0;
	for (int i = 0; i < size; i++) {
		consequence += vector_a[i] * vector_b[i];
	}

	return consequence;
}

void initialize(int vector_a[], int size){
	for(int i=0; i<size; i++)
		vector_a[i] = rand()%5;
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