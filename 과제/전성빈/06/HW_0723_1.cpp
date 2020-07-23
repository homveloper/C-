#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void add(int vector_a[], int vector_b[], int size);
void print(int a[], int size);
void initialize(int vector_a, int size);

void main() {
	srand(time(NULL));
	const int size = 5;
	int vector_a[size];
	int vector_b[size];

	initialize(vector_a,size);
	initialize(vector_b,size);

	print(vector_a,size);
	print(vector_b,size);

	cout<<endl;

	add(vector_a, vector_b, size);

	print(vector_a,size);
	print(vector_b,size);
}

void add(int vector_a[], int vector_b[], int size) {

	int con;

	for (int i = 0; i < size; i++){
		con = vector_a[i] + vector_b[i];
		vector_a[i] =con;
	}
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